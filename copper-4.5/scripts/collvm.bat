@echo off
REM Script to compile with copper-llvm
REM It generates bitcode (.bc) and compile it to an ELF object file (.o)
REM
REM * The -o must be specified
REM * Use -cc <compiler> to use an alternate binary for copper-llvm
REM

set COPPERLLVM=copper-llvm
set LLC=llc
set ARGS=

:parse
if "%~1"=="" goto endparse
if "%~1"=="-o" goto out
if "%~1"=="-cc" goto cc
set ARGS=%ARGS% %~1
shift
goto parse
:out
shift
set OUT=%~1
shift
goto parse
:cc
shift
set COPPERLLVM=%~1
shift
goto parse
:endparse

%COPPERLLVM% -o %OUT%.bc %ARGS%
REM opt -O1 -f -o %OUT%.bc %OUT%.bc
%LLC% -filetype=obj %OUT%.bc -o %OUT%
