#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
int _isupper(int c);
int _isdigit(int c);
int mul(int a, int b);
void print_numbers(void);
void print_most_numbers(void);
void more_numbers(void);
void print_line(int n);
void print_diagonal(int n);
void print_square(int size);
void print_triangle(int size);
void print_number(int n);

#endif
How do we include this in our program?
To use the standard printf function, as well as other defined functions and prototypes like the ones we just created, you need to include the <stdio.h> header file, as well as the header file you created main.h :


COPY
#include <stdio.h>
#include "main.h"
int main() {
  printf("Hello, World!\n");
  return 0;
}
We will cover the use of the "main.h" in another post, so don't worry.

What is the difference between <headerfile.h> and "headerfile.h" ?

Header files can be included in a program using either angle brackets <headerfile.h> or double quotes "headerfile.h".

When a header file is included using angle brackets <headerfile.h>, the compiler searches for the file in the standard system directories. These directories contain header files that are part of the C standard library or other system libraries.

On the other hand, when a header file is included using double quotes "headerfile.h", the compiler searches for the file in the current directory first. If it is not found there, it searches for it in the standard system directories.

In general, angle brackets are used to include system headers, while double quotes are used to include user-defined headers.

How does the main Function Influence the Return Value of the Program?
The return value of the program is determined by the return statement in the main function. A return value of 0 typically indicates that the program ran successfully, while a non-zero return value typically indicates an error.

For example:


COPY
#include <stdio.h>

int main() {
  printf("Hello, World!\n");
  return 0;
}
In this program, the main function returns 0, indicating that the program ran successfully.

In conclusion, C programming is a great language for beginners to learn, and this guide has covered some of the essential topics to get you started. Happy coding!"
