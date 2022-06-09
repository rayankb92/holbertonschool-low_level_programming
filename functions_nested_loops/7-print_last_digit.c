#include "main.h"

/**
 * print_last_digit - explicit name
 * @n: arg1
 * Return: last digit of arg 1
 */

int print_last_digit(int n)
{
	int a;

	if (n < 0)
	{
		n = -n;
		a = n % 10;
	}
	else
	{
		a = n % 10;
	}
	_putchar(a + '0');
	return (a);
}

/**int print_last_digit(int n)
 *{
 *	int res;
 *
 *	res = _putchar(n % 10);
 *	return (res);
 *}
 */
