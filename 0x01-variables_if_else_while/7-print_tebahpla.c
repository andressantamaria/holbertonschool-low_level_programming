#include <stdio.h>
/**
 * main - Prints the alphabet in reverse order
 * Return: integer zero.
 */
int main(void)
{
	int c;

	for (c = 122; c > 96; c--)
		putchar(c);

	putchar('\n');
	return (0);
}
