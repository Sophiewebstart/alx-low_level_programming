#include <stdio.h>
#include "function_pointers.h"

/**
  * print_name - this function prints a name using a function pointer
  * @name: name to be printed
  * @f: pointer to the function to be printed
  *
  * Description - writes a program that prints a name using the funcion
  * print_name
  */
void print_name(char *name, void (*f)(char *))
{
		f(name);
}
