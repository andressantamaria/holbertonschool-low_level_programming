#include <stdio.h>
/**
 * main - Prints base 16 in lowercase, followed by a new line.
 * Return: integer zero.
 */
int main(void)
{
	int hexa;

	for (hexa = 48; hexa < 58; hexa++)
		putchar(hexa);
	for (hexa = 97; hexa < 103; hexa++)
		putchar(hexa);

	putchar('\n');
	return (0);
}
