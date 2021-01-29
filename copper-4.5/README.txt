Copper 4.5

Copper is a simple imperative language statically typed with type inference 
and genericity.

BUILDING FROM SOURCES

The makefile requires the GNU make and Microsoft Visual Studio as it uses its linker.
The LLVM version requires the LLVM libraries version 3.2.

To build the COFF version on Windows:

	make -f Makefile.windows

To build the LLVM version on Windows:

	set LLVMLIB=<path to LLVM libs>
	make -f Makefile.windows BACKEND=llvm

To build the ELF version on Linux:

	make COPPER=boot/copper-elf64
	make install

To build the LLVM version on Linux:

	make COPPER=boot/copper-elf64 BACKEND=llvm
	make BACKEND=llvm install

LICENSE

Copper is released under the BSD license.


CONTACT

Marc Kerbiquet
mkerbiquet@tibleiz.net
