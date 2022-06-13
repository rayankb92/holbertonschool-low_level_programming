#include "main.h"
/**
 * _isupper - return 1 if c is upper case otherwise it returns 0
 * @c:  argument 1
 * Return: 1 if upper else 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
