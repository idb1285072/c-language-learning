// ASCII Value -> ASCII Character
#include <stdio.h>

int main()
{
  char ascii_character;
  printf("Enter a character: ");
  scanf(" %c", &ascii_character);
  printf("ASCII Value of %c is %d\n", ascii_character, ascii_character);

  return 0;
}

// ASCII Character -> ASCII Value
#include <stdio.h>

int main()
{
  char ascii_value;
  printf("Enter an ASCII Value: ");
  scanf("%d", &ascii_value);
  printf("ASCII Character of %d is %c\n", ascii_value, ascii_value);

  return 0;
}