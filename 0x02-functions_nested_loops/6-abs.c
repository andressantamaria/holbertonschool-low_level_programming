#include "main.h"
/**
 * _abs - computes the absolute value of an integer.
 * @n: integer to be avaluated
 *
 * Return: n if number is postivi o zero, -n if negative
 *
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-1 * n);

	_putchar('\n');
}
