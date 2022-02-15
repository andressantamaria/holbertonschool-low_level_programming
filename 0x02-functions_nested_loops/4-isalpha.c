#include "main.h"
/**
 * _isalpha - Write a function that checks for alphabetic character
 * @c: The number to be checked
 *
 * Return: 1 if is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c <= 122 && c >= 97) || (c <= 90 && c >= 65))
		return (1);
	else
		return (0);

	_putchar('\n');
}
