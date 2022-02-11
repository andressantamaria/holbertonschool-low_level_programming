#include <stdio.h>
/**
 * main - Prints alphabet in lower case
 * Return: integer zero
 */
int main(void)
{
	int c;

	for (c = 97; c < 123; c++)
	{
		putchar(c);
	}
	putchar(10);

	return (0);
}
