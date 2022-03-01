##  Here are the below steps to run the code

 * For Running and Building the code
   * Type make run in terminal
 * For Running the Building tests
   * Type make run_test in terminal
 * For static analysis
   * Type make static_analysis in terminal
 * For dynamic analysis
   * Type make dynamic_analysis in terminal
 * For code coverage
   * Type make coverage in terminal
 * For cleaning
   * Type make clean in terminal
  
  
## Usage of Pointers

## Pointers:
* The Pointer in C, is a variable that stores address of another variable.
*  A pointer can also be used to refer to another pointer function.
*   A pointer can be incremented/decremented, i.e., to point to the next/ previous memory location. The purpose of pointer is to save memory space and achieve faster execution time.
Like variables, pointers in C programming have to be declared before they can be used in your program. Pointers can be named anything you want as long as they obey C’s naming rules. A pointer declaration has the following form.

 syntax:
data_type * pointer_variable_name;

* Types of Pointers in C:
1.Null Pointer
2.Void Pointer
3.Wild pointer
4.Dangling pointer

## Usage of Preprocessor :

* The C preprocessor is a macro processor that is used automatically by the C compiler to transform your program before actual compilation. It is called a macro processor because it allows you to define macros, which are brief abbreviations for longer constructs.

*The C preprocessor provides four separate facilities that you can use as you see fit:

* Inclusion of header files. These are files of declarations that can be substituted into your program.

## Function Pointer
* In the C function pointer is used to resolve the run time-binding. 
* A function pointer is a pointer that stores the address of the function and invokes the function whenever required.
*  In C, we can use function pointers to avoid code redundancy.

## Struct

* A structure is a key word that create user defined data type in C. A structure creates a data type that can be used to group items of possibly different types into a single type.

* ‘struct’ keyword is used to create a structure. 

* A structure variable can either be declared with structure declaration or as a separate declaration like basic types.
* Structure members cannot be initialized with declaration. 

## Typedef

* typedef, which we can use to give a type a new name. Following is an example to define a term BYTE for one-byte numbers.After this type definition, the identifier BYTE can be used as an abbreviation for the type unsigned char
* Syntax: typedef data_type new_name


