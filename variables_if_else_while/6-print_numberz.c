#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int number;

	/* Imprime les nombres dans l'ordre */
	for (number = '0'; number <= '9'; number++)
	{
		putchar (number);
	}

	/* Imprime une nouvelle ligne */
	putchar('\n');

	return (0);
}
