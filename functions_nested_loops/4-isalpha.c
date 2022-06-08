#include "main.h"
/**
 *_isalpha - check if alphabetic char
 *@c: arg 1
 *Return: 1 if is an alphabetic character 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
