#include "main.h"
/**
 * _isdigit - check if it's a digit or not
 * @c: the char to check
 * Return: 1 if it's a digit else 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
