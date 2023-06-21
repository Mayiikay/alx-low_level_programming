#include "main.h"
/**
 * Print_alphabets - print all alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

Void print_alpbabet_x10(void)
{
	int i;
	int j;

	for (j = 1; i <= 10; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_purchar(j);
		}
		_putchar('\n');
	}

