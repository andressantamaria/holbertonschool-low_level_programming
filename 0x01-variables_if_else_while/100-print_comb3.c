#include <stdio.h>
/**
 * main - Print all possible different combinations of two digits.
 * Return: zero
 */
int main(void)
{
	int p, q;
	int notInt = 48;

	for (p = 0; p < 9; p++)
	{
		for (q = 1; q < 10; q++)
		{
			if (q > p)
			{
				putchar(p + 48);
				putchar(q + 48);

				if (p < 8 || q < 9)
				{
					putchar(',');
					putchar(32);
				}

			}
		}
	}

	putchar('\n');
	return (0);
}
