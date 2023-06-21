#include <stdio.h>

int main() {
    char letter;

    // Imprimer l'alphabet en minuscules
    for (letter = 'a'; letter <= 'z'; letter++)
      {
        putchar(letter);
      }

    // Imprimer l'alphabet en majuscules
    for (letter = 'A'; letter <= 'Z'; letter++)
      {
        putchar(letter);
      }

    // Imprimer une nouvelle ligne
    putchar('\n');

    return 0;
}
