#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print a random number and the last digit
 * Return: 0
 */
int main(void)
{
	int n;
	int b;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	b = n % 10;
	printf("Last digit of %d is %d and ", n, b);
	if (b > 5)
	{
		printf("is greater than 5\n");
	}
	else if (b == 0)
	{
		printf("is 0\n");
	}
	else if (n < 6 && n != 0)
	{
		printf("is less than 6 and not 0\n");
	}
	return (0);
}
