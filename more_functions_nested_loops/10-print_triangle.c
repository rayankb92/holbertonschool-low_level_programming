#include "main.h"
#include <stdio.h>
/**
 * print_triangle - explicit
 * @size: size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int i;
	int j;
	int x;

	if (size <= 0)
	{
		printf("\n");
	}
	for (i = size; i > 0; i--)
	{
		for (j = 0; j < (i - 1); j++)
		{
			printf(" ");
		}
		for (x = size; x > (i - 1); x--)
		{
		printf("#");
		}
		printf("\n");
	}
}
