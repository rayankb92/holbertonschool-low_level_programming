#include "main.h"
#include <stdio.h>
/*
 * more_numbers - print 10 times numbers from 0 to 14
 * Return: void
 */

void more_numbers(void)
{
	int i;
	int b;
	
	for (b = 0; b <= 10; b++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) +'0');
			}
			else
			{
			_putchar(i + '0');
			}
		}
	printf("\n");
	}
}
