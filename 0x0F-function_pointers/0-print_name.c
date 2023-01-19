#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name -  prints name using callback function
 * @name: the name to be printed
 * @f: the pointer calling the function to print 
 * name
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
