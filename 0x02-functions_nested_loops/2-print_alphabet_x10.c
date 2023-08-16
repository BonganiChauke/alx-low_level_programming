include "main.h"

/**
 * print_alphabet_x10 - Program Prints lowercase alphabet 10 times
 *
 */

void print_alphabet_x10(void)
{
	char num, letter;

	for (num = 0; num <= 9; num++)
	{
		for (letter = 'a'; letter <= 'Z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
