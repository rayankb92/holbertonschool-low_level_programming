#include <stdio.h>
/**
 * main - print alphabter in lowercase without q and e
 * Return: 0 if success
 */

int main(void)
{
	char i;

	for (i = 97; i <= 122; i++)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
	}
	printf("\n");
	return (0);
}
