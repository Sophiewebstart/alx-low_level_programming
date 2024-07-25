#include <stdio.h>
#include "function_pointers.h"

/**
  * print_name - a function that prints a name using a function pointer
  * @name: name to be printed
  * @f: pointer to the function to be printed
  *
  * Description - writes a program that prints a name using a funcion
  * pointer
  */
void print_name(char *name, void (*f)(char *))
{
		f(name);
}
