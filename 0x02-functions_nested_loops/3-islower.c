#include "main.h"
/**
 * _islower - Checks for lowercase character.
 * Return: 1 if is a lower case alphabeth, 0 if doesn't.
 * @c: it's an integer wich must me interpreted in ascii code
 */
int _islower(int c)
{

	if (c <= 122 && c >= 97)
		return (1);
	else
		return (0);

	_putchar('\n');
}
