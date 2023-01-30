#include <stdio.h>

/**
 * before_main - applies constructor attribute
 * hence strimng is printed
 * before main function execution
 * Return: nothing
 */
void before_main(void) __attribute__((constructor));

void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

