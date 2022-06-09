#include "main.h"

/**
 * print_last_digit - explicit name
 * @n: arg1
 * Return: last digit of arg 1
 */

int print_last_digit(int n)
{
	int a;
	int min;

	min = -2147483647;
	if (n == min)
	{
		n--;
		n = -n;
	}
	else if (n < 0)
	{
		n = -n;
	}
	a = n % 10;
	_putchar(a + '0');
	return (a);
}
