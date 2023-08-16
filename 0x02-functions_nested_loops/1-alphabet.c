#include "main.h"
#include <unistd.h>

/**
 * main - Program prints alphabets in lowercase
 *
 * Return:0
 */

void print_alphabet(void)
{
	char low  = 'a';

	while (low  <= 'Z')
	{
		_putchar(low);
		low++;
	}
	_putchar('\n');
	
}
