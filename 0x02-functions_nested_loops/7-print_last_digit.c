#include "main.h"
/**
 * print_last_digit - Makes the sum of two numbers
 * @last: Number to take its last number
 *
 * Description: Take a number, and return its last digit
 * Return: Positive digit
 */
int print_last_digit(int last)
{
	int ultimo;

	if (last >= 0)
	{
		ultimo = (last % 10) + 48;
	}
	else
	{
		last = -1 * last;
		ultimo = (last % 10) + 48;
	}
	_putchar(ultimo);
	return (0);
}