#include "main.h"
/**
 *times_table - prints zero to nine multiplication table
 *
 */
void times_table(void)
{
	int number;
	int table [] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	for (number = 0; number <= 9; number++)
	{
		int aux;

		for (aux = 0; aux <= 9; aux++)
		{
			int mult = aux * table[number];
			int unit = mult % 10;
			int ten = (mult - unit) / 10;

			if (mult < 10)
			{
				if (aux != 0)
					_putchar(32);

				_putchar(unit + 48);

				if (aux < 9)
				{
					_putchar(44);
					_putchar(32);
				}
			}
			else
			{
				_putchar(ten + 48);
				_putchar(unit + 48);

				if (aux != 9)
				{
					_putchar(44);
					_putchar(32);
				}
			}
		}
		_putchar('\n');
	}
}
