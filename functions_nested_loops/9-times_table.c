#include "main.h"
#include <unistd.h>
/**
 * times_table - prints multiple of 1 to 10
 * Return: void
 */
void times_table(void)
{
	int i, b, c;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');
		for (b = 1; b < 10; b++)
		{
			c = i * b;
			_putchar(',');
			_putchar(' ');
			if (c < 10)
			{
				_putchar(' ');
				_putchar(c + '0');
			}
			else
			{
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
