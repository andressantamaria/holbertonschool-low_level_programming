#include <stdio.h>
/**
 * main - Prints alphabet in lower case and upper case
 * Return: integer zero
 */
int main(void)
{
	int c;

	for (c = 97; c < 123; c++)
	{
		putchar(c);
	}
	for (c = 65; c < 91; c++)
	{
		putchar(c);
	}
	putchar(10);

	return (0);
}
