#include <stdio.h>
/**
 * main - print alphabet in lower then uppercase
 * Return: 0 if success
 */
int main(void)
{
	char i;
	char s;

	for (i = 97; i <= 122; i++)
	{
	putchar(i);
	}
	for (s = 65; s <= 90; s++)
	{
	putchar(s);
	}
	printf("\n");
	return (0);
}
