#include "main.h"

/**
 * print_line - explicit
 * @n: number of time it print "_"
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
