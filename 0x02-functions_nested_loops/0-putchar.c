#include "main.h"
/**
 * main - Prints _putchar
 * Return: integer zero
 */
int main(void)
{
	char x[] = "_putchar";
	int y = 0;

	while (x[y] != '\0')
	{
		_putchar(x[y]);
		y++;
	}

	_putchar('\n');
	return (0);
}
