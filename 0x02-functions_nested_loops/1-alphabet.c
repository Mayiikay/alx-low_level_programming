#include "main.h"
/**
 * main - print the alphabets in lowercase
 *
 * is written by mbah
 */
void print_alphabet(void);
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}