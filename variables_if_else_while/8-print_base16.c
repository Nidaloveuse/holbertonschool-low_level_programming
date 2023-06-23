#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	char letter;
	int number;

	/* imprime les chiffres dans l'ordres numérique */
	for (number = '0'; number <= '9'; number++)
	{
		putchar(number);
	}
	/* imprimer l'alphabet en minuscule */
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}
	/* imprime une nouvelle ligne */
	putchar('\n');
	return (0);
}
