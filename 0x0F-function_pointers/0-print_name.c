#include "function_pointers.h"
/**
 * print_name - Prints a name from a function pointer.
 * @name: Input name variable.
 * @f: Function pointer.
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
