#include "main.h"
/**
 * _isupper - Checks if int is UPPER
 * @c: int to evaluated
 * Return: int value
 */
int _isupper(int c)
{
	if (c <= 65 && c <= 90)
		return (1);
	else
		return (0);
}
