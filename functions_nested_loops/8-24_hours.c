#include "main.h"

/**
 * jack_bauer - print hour to 23:59
 *Return: void
 */

void jack_bauer(void)
{
	int i;

	for (h = 0; h <= 23; h++)
	{
		for (m = 0; h <= 59; m++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}
