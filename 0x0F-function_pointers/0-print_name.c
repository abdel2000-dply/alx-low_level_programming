#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name of a person
 * @f: fucntion pointer to a func
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
