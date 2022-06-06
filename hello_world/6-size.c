#include <stdio.h>
/**
 * main - fonction main
 * Return - this return 0
 */

int main(void)
{
	printf("Size of a char: %ld byte(s)\n", sizeof(char));
	printf("Size of an int: %ldbyte(s)\n", sizeof(int));
	printf("Size of a long int: %ldbyte(s)\n", sizeof(long));
	printf("Size of a long long int: %ldbyte(s)\n", sizeof(long long int));
	printf("Size of a float: %ldbyte(s)\n", sizeof(float));
	return (0);
}
