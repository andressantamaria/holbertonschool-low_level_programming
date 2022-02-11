#include <stdio.h>
/**
 * main - Prints size of various primitive data type
 * Return: integer zero
 */
int main(void)
{
	printf("Size of a char: %zu %s\n", sizeof(char), "bytes(s)");
	printf("Size of an int: %zu %s\n", sizeof(int), "byte(s)");
	printf("Size of a long int: %zu %s\n", sizeof(long), "byte(s)");
	printf("Size of a long long int: %zu %s\n", sizeof(long long), "byte(s)");
	printf("Size of a float: %zu %s\n", sizeof(float), "byte(s)");
	return (0);
}
