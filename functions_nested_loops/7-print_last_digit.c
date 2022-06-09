#include "main.h"

/**
 * print_last_digit - explicit name
 * @n: arg1
 * Return: last digit of arg 1
 */

int print_last_digit(int n)
{
	int a;

	if (n == -2147483648)
	{
		n = 8;
	}
	else if (n < 0)
	{
		n = -n;
	}
	a = n % 10;
	_putchar(a + '0');
	return (a);
}
