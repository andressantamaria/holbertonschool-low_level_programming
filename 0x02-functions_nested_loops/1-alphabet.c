#include "main.h"
/**
 * print_alphabet - Prints alphabet in lower case, ends with new line
 * Return: zero.
 */
void print_alphabet(void)
{
	int c;

	for (c = 97; c < 123; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
