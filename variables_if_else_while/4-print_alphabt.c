#include <stdio.h>

/**
* main - Prints the size of various types based on
*        the computer it is compiled and run on..
*
* Return: Always 0.
*/
int main(void)
{
	char letter;

	/* imprime l'alphabet en lettre minuscule */
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}
	/* imprime une nouvelle ligne */
	putchar ('\n');
	return (0);
}
