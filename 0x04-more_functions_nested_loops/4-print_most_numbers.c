#include "main.h"
/**
 * print_most_number -  Prints from 0 to 9, neither 2 non 4
 */
void print_most_numbers(void)
{
	int i;
	for (i = 48; i < 58; i++)
	{
		if (i != 50 && i != 52)
			_putchar(i);
	}

        _putchar('\n');
}
