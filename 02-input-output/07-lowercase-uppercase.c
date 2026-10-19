// lowercase to uppercase without library function
#include <stdio.h>

int main()
{
  char lower;
  printf("Enter a Lower Case Letter: ");
  scanf(" %c", &lower);
  printf("Uppercase of %c is %c\n", lower, lower - 32);
  return 0;
}

// uppercase to lowercase without library function
#include <stdio.h>

int main()
{
  char upper;
  printf("Enter a Upper Case Letter: ");
  scanf(" %c", &upper);
  printf("Lowercase of %c is %c\n", upper, upper + 32);
  return 0;
}

// lowercase to uppercase with library function
#include <stdio.h>
#include <string.h>

int main()
{
  char lower;
  printf("Enter a Lower Case Letter: ");
  scanf(" %c", &lower);
  printf("Uppercase of %c is %c\n", lower, strupr(&lower));
  return 0;
}

// uppercase to lowercase with library function
#include <stdio.h>
#include <string.h>

int main()
{
  char upper;
  printf("Enter a Upper Case Letter: ");
  scanf(" %c", &upper);
  printf("Lowercase of %c is %c\n", upper, strlwr(&upper));
  return 0;
}

// PRINT A to Z
#include <stdio.h>

int main()
{
  for (char letter = 'A'; letter <= 'Z'; letter++)
  {
    printf("%c", letter);
  }
  return 0;
}

// PRINT a to z
#include <stdio.h>

int main()
{
  for (char letter = 'a'; letter <= 'z'; letter++)
  {
    printf("%c", letter);
  }
  return 0;
}

// ASCII Value
#include <stdio.h>

int main()
{
  printf("Char\tValue\n");
  for (int i = 1; i < 256; i++)
  {
    printf("%c\t%d\n", i, i);
  }
  return 0;
}
