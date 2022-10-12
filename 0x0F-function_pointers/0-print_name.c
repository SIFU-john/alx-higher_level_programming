#include <stdlib.h>
#include "function_pointers.h"i
/**
 * main - check the code
 * @name: name of the person
 * print_name - prints a name
 * @name: name to print
 * Return: Nothing.
 * @f: pointer to the printing function
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
