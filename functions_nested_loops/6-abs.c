#include "main.h"
/**
 * _abs - return the absolute number
 * @n: arg 1
 * Return: absolute
 */

int _abs(int n)
{
	int res;
	int test;

	test = 0;
	if (n < 0)
	{
		res = test - n;
		return (res);
	}
	else
	{
		return (n);
	}
}
