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

  /* Imprime les nombres dans l'ordre */
  for (number = '0'; number <= '9'; number++) {
    putchar (number);
  }

  /* Imprime une nouvelle ligne */
  putchar ('\n');

  return (0);
}
