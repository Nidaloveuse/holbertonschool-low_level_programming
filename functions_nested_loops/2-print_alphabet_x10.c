#include "main.h"

/**
 * print_alphabet_x10 - Print the alphabet 10 times
 */
void print_alphabet_x10(void)
{
	char letter = 'a';
	int number = 0;

	for (number = 0; number < 10; number++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
