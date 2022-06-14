#include "main.h"
#include <stdio.h>
/**
 * main - fizzbuzz
 * Return: 1 if success
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0)
		{
			printf("Fizz");
		}
		if ((i % 5) == 0)
		{
			printf("Buzz");
		}
		else if ((i % 3) != 0)
		{
		 	printf("%d", i);
		}
		if (i != 100)
		printf(" ");
	}
	return (1);
}
