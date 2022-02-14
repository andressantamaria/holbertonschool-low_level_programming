#include <stdio.h>
/**
 * main - Use print_alphabet() function
 * Return: zero
 */
/* print_alphabet declaration */
void print_alphabet(void);

int main(void)
{
	print_alphabet();

	return (0);
}

/**
 * print_alphabet - Prints alphabet in lower case, ends with new line
 */

void print_alphabet(void)
{
	int c;

	for (c = 97; c < 123; c++)
	{
		putchar(c);
	}
	putchar(10);
}
