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
		for (b = 0; b < 10; b++)
		{
			c = i * b;
			if (c < 10)
			{
				if (b != 0)
				{
				_putchar(' ');
				}
				_putchar(c + '0');
			}
			else
			{
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
			if (b != 9)
			{
			_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
