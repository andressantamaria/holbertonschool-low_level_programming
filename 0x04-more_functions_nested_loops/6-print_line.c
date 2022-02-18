#include "main.h"
/**
 * print_line - Function that draws a straight line in the terminal.
 * @n: straight line value
 */
void print_line(int n)
{
	int counter;

	for (counter = 0; counter < n; counter++)
	{
		_putchar(95);
	}

	_putchar('\n');
}
