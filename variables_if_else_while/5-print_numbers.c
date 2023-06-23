#include <stdio.h>

/**
* main - Prints the size of various types based on
*        the computer it is compiled and run on..
*
* Return: Always 0.
*/
int main(void)
{
	char number;

	/* Imprime moi les chiffres dans l'ordre numérique */
	for (number = '0'; number <= '9'; number++)
	{
		putchar(number);
	}

	/* Imprime moi une nouvelle ligne */
	putchar('\n');
	return (0);
}
