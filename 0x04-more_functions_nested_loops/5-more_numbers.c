#include "main.h"
/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14
 *
 */
void more_numbers(void)
{
	int i,j;

	for(j = 0; j < 10; j++)
	{
		for (i = 48; i < 58; i++)
			_putchar(i);

		for (i = 48; i < 53; i++)
		{
			_putchar(49);
			_putchar(i);
		}

		_putchar('\n');
	}
}
