#include <stdio.h>

/**
* main - Prints the size of various types based on
*        the computer it is compiled and run on..
*
* Return: Always 0.
*/

int main(void)
{
	int number;

	/* imprime les chiffres dans l'ordres numérique */
	for (number = 48 ; number < 58 ; number++)
	{
		putchar(number);
		if (number != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
