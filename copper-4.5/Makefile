# GNU Makefile to build copper
#
# USAGE
#	make	-- Build the ELF version
#	make BACKEND=coff	-- Build the 32 bit COFF version
#	make BACKEND=elf	-- Build the 32 bit ELF version
#	make BACKEND=elf64	-- Build the 64 bit ELF version
#	make BACKEND=llvm	-- Build the LLVM version
#	make BACKEND=c	-- Build the C version
#
# OPTIONS
#	OUTDIR=<path to build directory>
#		Generated files go there. Current directory by default.
#	BACKEND=coff|elf|elf64|llvm|c
#		Build a specific backend.
#	DEBUG=1
#		Build with debug info (if available).
#	COPPER=<path to copper>
#		Building with a specified compiler:
#	TARGET=32|64
#		The address size of the target. By default it uses the 
#		address size of the host.
#	OS=unix|windows
#		Build for Windows or Unix

srcdir = .
prefix = /usr/local
exec_prefix = ${prefix}
bindir = ${exec_prefix}/bin

OUTDIR=.
COPPER=copper
CPFLAGS=
CFLAGS=
CC=gcc
LFLAGS=-no-pie
OS=unix
INSTALL=install
LLVMCONFIG=llvm-config

SOURCES= \
	lib/std.co \
	lib/private/windows.co \
	lib/llvm/BitWriter.co \
	lib/llvm/Core.co \
	lib/llvm/Initialization.co \
	lib/llvm/Target.co \
	lib/elf/elf.co \
	lib/coff/coff.co \
	src/codegen/generator-llvm.co \
	src/codegen/generator-c.co \
	src/codegen/generator-x86.co \
	src/codegen/generator-x64.co \
	src/data/object-file-coff.co \
	src/data/object-file-elf.co \
	src/data/object-file-elf64.co \
	src/data/ast.co \
	src/data/token.co \
	src/data/program.co \
	src/commons.co \
	src/lexer.co \
	src/parser.co \
	src/builder.co \
	src/main.co

ifeq ($(shell uname -m), x86_64)
	BACKEND=elf64
	TARGET=64
else
	BACKEND=elf
	TARGET=32
endif

ifdef DEBUG
	CPFLAGS += -debug -D debug
	CFLAGS += -g
	LFLAGS += -g
endif

.SILENT:
.PHONY: info init-boot boot boot-elf64 c bc obj

all: info $(OUTDIR)/copper-$(BACKEND)

# Build only the C file (e.g. to generate bootstrap files)
c: $(OUTDIR)/copper-$(BACKEND).c

# Build only the LLVM bitcode file (e.g. to generate bootstrap files)
bc: $(OUTDIR)/copper-$(BACKEND).bc

# Build only the COFF object file (e.g. to generate bootstrap files)
obj: $(OUTDIR)/copper-$(BACKEND).o

# Boot Targets
#
# initial copper-c is built using a C compiler
# stage1 is built with the copper-c
# stage2 is built with stage1 (which is assumed to be correctly compiled by copper-c)
# stage3 is built with stage2 (which may be broken)
#	stage3 is a mandatory validation step of the binary built in stage2
#
boot-c: init-boot
	$(MAKE) OUTDIR=$(OUTDIR)/stage1 BACKEND=c COPPER="scripts/coc -cc $(OUTDIR)/copper-c"
	$(MAKE) OUTDIR=$(OUTDIR)/stage2 BACKEND=c COPPER="scripts/coc -cc $(OUTDIR)/stage1/copper-c"
	$(MAKE) OUTDIR=$(OUTDIR)/stage3 BACKEND=c COPPER="scripts/coc -cc $(OUTDIR)/stage2/copper-c"

boot-elf: init-boot
	$(MAKE) OUTDIR=$(OUTDIR)/stage1 BACKEND=elf COPPER="scripts/coc -cc $(OUTDIR)/copper-c"
	$(MAKE) OUTDIR=$(OUTDIR)/stage2 BACKEND=elf COPPER=$(OUTDIR)/stage1/copper-elf
	$(MAKE) OUTDIR=$(OUTDIR)/stage3 BACKEND=elf COPPER=$(OUTDIR)/stage2/copper-elf

boot-elf64: init-boot
	$(MAKE) OUTDIR=$(OUTDIR)/stage1 BACKEND=elf64 COPPER="scripts/coc -cc $(OUTDIR)/copper-c"
	$(MAKE) OUTDIR=$(OUTDIR)/stage2 BACKEND=elf64 COPPER=$(OUTDIR)/stage1/copper-elf64
	$(MAKE) OUTDIR=$(OUTDIR)/stage3 BACKEND=elf64 COPPER=$(OUTDIR)/stage2/copper-elf64

boot-llvm: init-boot
	$(MAKE) OUTDIR=$(OUTDIR)/stage1 BACKEND=llvm COPPER="scripts/coc -cc $(OUTDIR)/copper-c"
	$(MAKE) OUTDIR=$(OUTDIR)/stage2 BACKEND=llvm COPPER="scripts/collvm -cc $(OUTDIR)/stage1/copper-llvm"
	$(MAKE) OUTDIR=$(OUTDIR)/stage3 BACKEND=llvm COPPER="scripts/collvm -cc $(OUTDIR)/stage2/copper-llvm"
	
init-boot: boot
	mkdir -p $(OUTDIR)/stage1
	mkdir -p $(OUTDIR)/stage2
	mkdir -p $(OUTDIR)/stage3
	rm -rf $(OUTDIR)/stage1/*
	rm -rf $(OUTDIR)/stage2/*
	rm -rf $(OUTDIR)/stage3/*

boot: $(OUTDIR)/file-unix.o
	echo Bootstrapping...
	$(CC) -g -c -fshort-wchar boot/copper-c-unix-$(TARGET).c -o $(OUTDIR)/copper-c.o
	$(CC) $(LFLAGS) $(OUTDIR)/copper-c.o $(OUTDIR)/file-unix.o -o $(OUTDIR)/copper-c

info:
	@echo === Building $(BACKEND) to $(OUTDIR) using "$(COPPER)"...

$(OUTDIR)/copper-coff: $(OUTDIR)/copper-coff.o $(OUTDIR)/file-unix.o
	@echo Linking...
	$(CC) $(LFLAGS) $^ -o $@

$(OUTDIR)/copper-elf: $(OUTDIR)/copper-elf.o $(OUTDIR)/file-unix.o
	@echo Linking...
	$(CC) $(LFLAGS) $^ -o $@

$(OUTDIR)/copper-elf64: $(OUTDIR)/copper-elf64.o $(OUTDIR)/file-unix.o
	@echo Linking...
	$(CC) $(LFLAGS) $^ -o $@

$(OUTDIR)/copper-c: $(OUTDIR)/copper-c.o $(OUTDIR)/file-unix.o
	@echo Linking...
	$(CC) $(LFLAGS) $^ -o $@

$(OUTDIR)/copper-llvm: $(OUTDIR)/copper-llvm.o $(OUTDIR)/file-unix.o
	@echo Linking...
	g++ $(LFLAGS) `$(LLVMCONFIG) --ldflags` $^ `$(LLVMCONFIG) --libs` -lpthread -lffi -ltinfo -ldl -lm -o $@

$(OUTDIR)/copper-$(BACKEND).o: $(SOURCES)
	@echo Compiling...
	$(COPPER) -I lib -I src -D backend=$(BACKEND) -D $(OS) -D target=$(TARGET) $(CPFLAGS) -o $@ src/main.co

$(OUTDIR)/copper-$(BACKEND).c: $(SOURCES)
	@echo Compiling...
	$(COPPER) -I lib -I src -D backend=$(BACKEND) -D $(OS) -D target=$(TARGET) $(CPFLAGS) -o $@ src/main.co

$(OUTDIR)/copper-$(BACKEND).bc: $(SOURCES)
	@echo Compiling...
	$(COPPER) -I lib -I src -D backend=$(BACKEND) -D $(OS) -D target=$(TARGET) $(CPFLAGS) -o $@ src/main.co

$(OUTDIR)/file-unix.o: lib/private/file-unix.c
	@echo file-unix.c
	$(CC) $(CFLAGS) -c -o $@ $?

install:
	$(INSTALL) -d $(DESTDIR)$(bindir)
	$(INSTALL) -s $(OUTDIR)/copper-$(BACKEND) $(DESTDIR)$(bindir)
	$(INSTALL) -m 755 scripts/collvm $(DESTDIR)$(bindir)
	$(INSTALL) -m 755 scripts/coc $(DESTDIR)$(bindir)

clean: 
	rm -rf $(OUTDIR)/stage1 $(OUTDIR)/stage2 $(OUTDIR)/stage3 $(OUTDIR)/*.o $(OUTDIR)/*.bc $(OUTDIR)/*.c $(OUTDIR)/copper-coff $(OUTDIR)/copper-elf $(OUTDIR)/copper-elf64 $(OUTDIR)/copper-llvm $(OUTDIR)/copper-c
