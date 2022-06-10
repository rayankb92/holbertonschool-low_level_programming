#include "main.h"
/**
 * print_to_98 - print any number to 98
 * @n: first arg
 * Return: void
 */

void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		if (i < 0)
		{
			i = -i;
			_putchar('-');
			if (i > 99)
			{
				_putchar(((i / 10) / 10) + '0');
				_putchar(((i / 10) % 10) + '0');
				_putchar((i % 10) + '0');
			}
			else if (i > 9 && i != 0)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
			else
			{
				_putchar(i + '0');
			}
			i = -i;
		}
		else if (i < 10)
		{
			_putchar(i + '0');
		}
		else
		{
		_putchar((i / 10) + '0');
		_putchar((i % 10) + '0');
		}
		if (i != 98)
		{
		_putchar(',');
		_putchar(' ');
		}
	}
	if (n != 98)
	{
	for (i = n; i >= 98; i--)
	{
		if (i >= 100)
		{
			_putchar(((i / 10) / 10) + '0');
			_putchar(((i / 10) % 10) + '0');
			_putchar((i % 10) + '0');
		}
		else
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		if (i != 98)
		{
		_putchar(',');
		_putchar(' ');
		}
	}
	}
	_putchar('\n');
}
