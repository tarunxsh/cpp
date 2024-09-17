# Refresher notes on C++
includes mechanics of a C++ program, program structure, pointers, functions, classes and misc operations
https://www.mauriciopoppe.com/notes/computer-science/programming-languages/cpp-refresher/

## Mechanics of a C++ program
GCC (GNU Compiler Collection) is a super set of various compilers.
It includes front ends for C, C++, Objective-C, Fortran, Ada, Go, D and Modula-2 as well as libraries for these languages (libstdc++,...)

gcc vs g++
The gcc compiler is used to compile the C programs, whereas the g++ is used for C++ programs.
While you could still use GCC to compile C++ program (by using it in gcc -xc++ -lstdc++ -shared-libgcc format), g++ provides a simpler syntax.

compilation can involve up to four stages: preprocessing, compilation proper, assembly and linking, always in that order. GCC is capable of preprocessing and compiling several files either into several assembler input files, or into one assembler input file; then each assembler input file produces an object file, and linking combines all the object files (those newly compiled, and those specified as input) into an executable file.

Preprocessing
-E                      Only run the preprocessor
output: file.i for C and file.ii for C++

Compilation
-S                      Only run preprocess and compilation steps, do not assemble
output: file.s

Assembly
-c                      Only run preprocess, compile, and assemble steps
The ultimate output is in the form of an o(bject) file for each source file.
output: file.o

Linking
g++ -o myexecutable first.o second.o third.o [other dependencies]
output: myexecutable or a.out if -o is not provided


all in one cmd
g++ -o myexecutable first.cpp second.cpp third.cpp [other dependencies]

compile all cpp files in current directory to o(bject) files of the same name
g++ -c *.cpp

more info
https://man7.org/linux/man-pages/man1/gcc.1.html
https://gcc.gnu.org/onlinedocs/gcc-11.1.0/gcc/Overall-Options.html#Overall-Options
https://oberon00.github.io/cpptutorial/proc/hello-world.html