#include "lists.h"

/**
  * print_first - funcion that prints before main functiom
  */
void __attribute__((constructor)) print_first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
