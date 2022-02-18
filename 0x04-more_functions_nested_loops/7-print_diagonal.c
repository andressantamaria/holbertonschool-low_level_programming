#include "main.h"
/**
 * print_diagonal - draws a diagonal
 * @n: determine lenght
 */
void print_diagonal(int n)
{
	int j, k;

	if (n > 0)
	{
		for (j = 0; j < n; j++)
		{
			for (k = 0; k < j; k++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
