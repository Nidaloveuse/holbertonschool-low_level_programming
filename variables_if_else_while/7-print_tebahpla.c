#include <stdio.h>

/**
* main - Prints the size of various types based on
*        the computer it is compiled and run on..
*
* Return: Always 0.
*/

int main() {
    char letter;

    /* Imprimer l'alphabet dans l'ordre décroissant */
    for (letter = 'z'; letter <= 'a'; letter++) {
        putchar(letter);
    }
    /* Imprimer une nouvelle ligne */
    putchar('\n');

    return 0;
}
