#include <stdio.h>
/**
 * main - Prints alphabet without e and q characters
 * Return: integer zero.
 */
int main(void)
{
	int c;

	for (c = 97; c < 123; c++)
	{
		if (c != 101 && c != 113)
		{
			putchar(c);
		}
	}
	putchar(10);
	return (0);
}
