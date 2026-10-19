/**
 * A data type specifies what kind of value a variable can store and how that value is interpreted.
 *
 * A variable is a named object that stores a value in memory. Its declared data type determines what kind of value it can hold.
 */

#include <stdio.h>

int main()
{
  // int age; // declaration
  // age = 25; // initialization

  int age = 25, page_count; // declaration and initialization of variable age
  float height = 5.8f;
  char grade = 'A';
  double pi = 3.1415926535;

  printf("Age: %d\n", age);
  printf("Height: %.1f\n", height);
  printf("PI: %.2lf\n", pi);
  printf("Grade: %c\n", grade);
  return 0;
}

// variable and datatype with scanf
#include <stdio.h>

int main()
{
  int age;
  float height;
  char grade;
  double pi;

  printf("Enter your age: ");
  scanf("%d", &age);
  printf("Enter your height: ");
  scanf("%f", &height);
  printf("Enter your pi: ");
  scanf("%lf", &pi);
  printf("Enter your grade: ");
  scanf(" %c", &grade);

  printf("Age: %d\n", age);
  printf("Height: %.1f\n", height);
  printf("PI: %.2lf\n", pi);
  printf("Grade: %c\n", grade);
  return 0;
}

/**
 * Variable Naming Convention:
 *  - can contain letters(A-Z,a-z), digits(0-9), underscores(_) and dollars($)
 *  - cannot start with digit
 *  - cannot contain spaces. if need two words, use underscore between two words like snake_case
 *  - cannot be keyword
 *  - case sensitive
 *  - max length 31 characters
 */

// scan 1 int and 1 float value and print
#include <stdio.h>

int main()
{
  int age;
  float height;
  printf("Enter your age and height: ");
  scanf("%d %f", &age, &height);
  printf("Your age: %d\nYour height: %.2f\n", age, height);
  return 0;
}