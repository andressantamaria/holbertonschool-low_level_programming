#include <stdio.h>
/**
 * main - Print all possible different combinations of three digits.
 * Return: zero
 */
int main(void)
{
	int p, q, r;

	for (p = 0; p < 9; p++)
	{
		for (q = 1; q < 10; q++)
		{
			for (r = 2; r < 10; r++)
			{
				if (p < q && q < r)
				{
					putchar(p + 48);
					putchar(q + 48);
					putchar(r + 48);

					if (p < 7 || q < 8 || r < 9)
					{
						putchar(',');
						putchar(32);
					}
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
