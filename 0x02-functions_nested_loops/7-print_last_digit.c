#include "main.h"
/**
 * print_last_digit - Makes the sum of two numbers
 * @last: Number to take its last digit
 *
 * Description: Take a number, and return its last digit
 * Return: Positive digit
 */
int print_last_digit(int last)
{
	int ultimo = last % 10;

	if (ultimo >= 0)
	{
		_putchar(ultimo + 48);
		return (ultimo);
	}
	else
	{
		_putchar(-ultimo + 48);
		return (-ultimo);
	}
}
