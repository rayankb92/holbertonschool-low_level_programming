#include "main.h"
#include <unistd.h>

/**
 * jack_bauer - print hour to 23:59
 *Return: void
 */

void jack_bauer(void)
{
	int h;
	int m;

	for (h = 0; h <= 23; h++)
	{
		m = 0;
		while (m <= 59)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
			m++;
		}
	}
}
