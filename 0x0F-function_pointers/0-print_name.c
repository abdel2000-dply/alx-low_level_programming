#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name of a person
 * @f: func that prints using printf
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
