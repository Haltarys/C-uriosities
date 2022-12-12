# C-uriosities

Small C codes snippets that prove that C++ isn't exactly a superset of C, and other interesting stuff about both languages.

Here is a list of links that provide more information for some of those curiosities:

- <https://youtu.be/s3Cv0-U5bXc>
- <https://youtu.be/j0_u26Vpb4w>
- <https://youtu.be/_JtPhF8MshA>
- <https://stackoverflow.com/questions/15897452/tail-recursion-in-gcc-g>
- <https://youtu.be/nS46JHmSaUM>
- <https://youtu.be/aMAM5vL7wTs>


## List of curiosities

### The Ackermann function

`ackermann.c`: the Ackermann function is a function that cannot be written iteratively.

### Bracket notation

`bracket_notation.c`: the famous syntax `array[i]` to access an element is just syntactic sugar, which can lead to weird looking code.

### Broken macro

`broken_macro.c`: functions and macros CANNOT be used interchangeably! Or you're in for trouble...

### String concatenation

`concat_strings.c`: everyone complains about how annoying it is to handle strings in C but it's easier than you think at compile time.

### Duplicate case statement

`dup_case.c`: C and C++ do not treat character literals the same way.


### Duplicate global variables

`dup_globals.c`: global variables are a bad practice, and in C, you're barely scratching the surface as to why.

### Scope of for loop

`for_loop.c`: C and C++ do not treat the `for` keyword the same when it comes to the scope of variables.

### Function name

`func_name.c`: useful tip when debugging callstacks in C.

### Function pointers

`func_ptr.c`: how different are functions from function pointers when calling one ?

### goto and variable declarations

`goto_exit.c`: you can skip instructions and variable declarations, but at your own risk!

### Implicit function declaration

`implicit_func.c`: C is not as strict as C++ regarding function declaration.

### main isn't always a function

`main_not_func.c`: the smallest C program that can be compiled.

### Cast a malloc() call

`malloc_cast.c`: how to tell the difference between a C programmer and a C++ programmer.

### structs

`structs.c`: filling a structs fields can be done in a number of ways.

### Tail recursion

`tail_recursion.c`: make the best out of recursive function by making them tail recursive!

### Unnamed structs

`unnamed_structs.c`: structs can have no name (or no fields).

### Variable length arrays

`vla.c`: AKA allocating an array on the stack at RUNTIME.


## Compilation

Each file has been compiled with `gcc` or `g++`.
