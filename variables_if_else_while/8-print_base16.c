#include <stdio.h>

/**                                                                                                                                                                                                                
* main - Prints the size of various types based on                                                                                                                                                                 
*        the computer it is compiled and run on..                                                                                                                                                                  
*                                                                                                                                                                                                                  
* Return: Always 0.                                                                                                                                                                                                
*/

int main (void)
{
  char letter;
  int number;

    /* imprime les chiffres dans l'ordres numérique */
  for (number = '0'; number <= '9'; number++) {
    putchar(number);
  }
  
  /* imprimer l'alphabet en minuscule */
  for(letter = 'a'; letter <= 'f'; letter++) {
    putchar(letter);
  }

  /* imprime une nouvelle ligne */
  putchar('\n');

  return (0);

}
