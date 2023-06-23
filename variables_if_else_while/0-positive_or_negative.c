#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Prints the size of various types based on
*        the computer it is compiled and run on..
*
* Return: Always 0.
*/

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("0 is zero\n");
	else
		printf("%d is negative\n", n);
	return (0);
}
