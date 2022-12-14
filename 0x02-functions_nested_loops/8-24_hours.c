#include "main.h"

/**
 * jack_bauer - Prints every minute of the day
 *
 * Return: 0
 */
void jack_bauer(void)
{
	int hours, min;

	for (hours = 0; hours <= 23; hours++)
	{
		for (min = 0; min <= 59; min++)
		{
			_putchar((hours / 10) + '0');
			_putchar((hours % 10) + '0');
			_putchar(58);
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
		}
	}
}
