#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *Main - prints all possible different combinations of two two-digits numbers 
 *Return: Always 0 (success)
 */
int main(void)
{
	int p, q;

	for (i = 0; i <= 98; p++)
	{
		for (q = p + 1; q <= 99; q++)
			{
				putchar((p / 10) + '0');
				putchar((p % 10) + '0');
				putchar (' ' );
				putchar((q / 10) + '0');
				putchar((j % 10) + '0');
				if (p == 98 && q == 99)
					continue;
					putchar(',');
					putchar(' ');
			}
	}
	putchar('\n');
	return (0);
}
