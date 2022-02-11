#include <stdio.h>
/**
 * main - Prints size of various primitive data type
 * Return: integer zero
 */
int main(void)
{
	printf("Size of a char: %zu  bytes(s)", sizeof(char));
	printf("Size of an int: %zu  bytes(s)", sizeof(int));
	printf("Size of a long int: %zu bytes(s)", sizeof(long));
	printf("Size of a long long int: %zu bytes(s)", sizeof(long long));
	printf("Size of a float: %zu bytes(s)", sizeof(float));
	return (0);
}
