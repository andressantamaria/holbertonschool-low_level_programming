#include "main.h"
/**
 * jack_bauer - Prints every minute of Jack Bauer
 * Description: prints in 24 H format
 */
void jack_bauer(void)
{
	int hour1, hour2, min1, min2;

        for (hour1 = 0; hour1 <= 2; hour1++)
	{
		for (hour2 = 0; hour2 <= 9; hour2++)
		{
			for (min1 = 0; min1 < 6; min1++)
			{
				for (min2 = 0; min2 <= 9; min2++)
				{
					if (hour1 >= 2 && hour2 >= 4)
						break;
					_putchar(hour1 + 48);
					_putchar(hour2 + 48);
					_putchar(58);
					_putchar(min1 + 48);
					_putchar(min2 + 48);
					_putchar(10);
				}
			}
		}
	}
}
