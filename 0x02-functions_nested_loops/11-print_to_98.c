#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints numbers from n to 98, followed by a new line.
 * @n: Where to start de count
 * Description: prints in 24 H format
 */
void print_to_98(int n)
{
	int aux;

	if (n <= 98)
	{

		for (aux = n; aux <= 98; aux++)
		{
			if (aux != 98)
				printf("%d ,", aux);
			else
				printf("%d", aux);
		}
	}
	else
	{
		for (aux = n; aux >= 98; aux--)
		{
			if (aux != 98)
				printf("%d ,", aux);
			else
				printf("%d", aux);
		}
	}

	printf("\n");
}
