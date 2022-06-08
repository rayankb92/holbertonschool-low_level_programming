#include "main.h"

/**
 * print_alphabet_x10 - print 10x alphabet
 * Return: void
 */

void print_alphabet_x10(void)
{
	char a = 'a';
	int i;

	a = 'a';
	for (i = 0; i < 10; i++)
	{
		while (a < 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
	}

}
