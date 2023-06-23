#include "main.h"

void print_alphabet_x10(void)
{
  char letter ='a';
  int number = 0;
  for (number = 0; number < 10; number++)
  {
    for (letter ='a'; letter <= 'z'; letter++)
    {
      _putchar(letter);
    }  
    _putchar('\n');
  }
  return;
}
