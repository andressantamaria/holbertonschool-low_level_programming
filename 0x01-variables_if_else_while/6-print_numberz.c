#include <stdio.h>
/**
 * main - print numbers from 0 to 10 just using putchar
 * Return: integer zero
 */
int main(void)
{
	int number;

	for (number = 48; number < 58; number++)
		putchar(number);

	putchar('\n');
	return (0);
}
