#include "main.h"
/**
 *
 *
 *
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (j = 0; j < n; j++)
	{
		for (i = 0; i < j; i ++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
}
