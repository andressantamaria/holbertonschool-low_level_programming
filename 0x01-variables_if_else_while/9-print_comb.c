#include <stdio.h>
/**
 * main - Print all possible combinations of single-digit numbers
 * Return: integer zero
 */
int main(void)
{
	int number;

	for (number = 48; number < 58; number++)
	{
		putchar(number);
		if (number < 57)
		{
			putchar(',');
			putchar(32);
		}
	}

	putchar('\n');
	return (0);
}
