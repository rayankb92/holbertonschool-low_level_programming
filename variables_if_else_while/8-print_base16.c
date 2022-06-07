#include <stdio.h>
/**
 * main - print base 16
 * Return: 0 if success
 */

int main(void)
{
	int i;
	int s;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	for (s = 97; s <= 102; s++)
	{
		putchar(s);
	}
	putchar('\n');
	return (0);
}
