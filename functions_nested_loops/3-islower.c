#include "main.h"
#include <ctype.h>
/**
 * _islower - check for lowercase char
 *@c: first arg
 * Return: 1 if c is lowercase 0 otherwise
 */

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
