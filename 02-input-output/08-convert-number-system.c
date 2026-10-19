// Decimal to Octal
#include <stdio.h>

int main()
{
  int number;
  printf("Enter a decimal number: ");
  scanf("%d", &number);
  printf("Octal number of %d is %o", number, number);
  return 0;
}

// Decimal to Hexadecimal
#include <stdio.h>

int main()
{
  int number;
  printf("Enter a decimal number: ");
  scanf("%d", &number);
  printf("Hexadecimal number of %d is %x", number, number);
  return 0;
}

// Octal to Decimal
#include <stdio.h>

int main()
{
  int number;
  printf("Enter a octal number: ");
  scanf("%o", &number);
  printf("Decimal number of %o is %d", number, number);
  return 0;
}

// Hexadecimal to Decimal
#include <stdio.h>

int main()
{
  int number;
  printf("Enter a hexadecimal number: ");
  scanf("%x", &number);
  printf("Decimal number of %X is %d", number, number);
  return 0;
}

// Decimal to Binary
#include <stdio.h>

int main(void)
{
   int number;
  printf("Enter a decimal number: ");
  scanf("%d", &number);
 
    // unsigned int num = 10;
    unsigned int binary[32];
    int i = 0;

    do
    {
        binary[i++] = number % 2;
        number /= 2;
    } while (number > 0);

    while (i > 0)
    {
        printf("%u", binary[--i]);
    }

    printf("\n");
    return 0;
}