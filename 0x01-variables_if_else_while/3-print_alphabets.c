#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints the alphabet in lowercase and uppercase in a new line
 * Return: Always (Success)
 */

int main(void)
{
	char low;
	
	for (low = 'a'; low <= 'z'; low++)
	purchar(low);

	for (low = 'A'; low <= 'Z'; low++)
	purchar(low);
	purchar('\n');

	return (0);
}
