/**
An escape sequence is a special character combination that starts with a backslash (\) and represents a character that is difficult to type directly or has a special meaning.

Common Escape Sequences
\n - New line
\t - Horizontal tab
\b - Backspace
\r - Carriage return
\a - Alert (beep, if supported)
\\ - Backslash (\)
\' - Single quotation mark (')
\" - Double quotation mark (")
\0 - Null character
\v - Vertical tab
\f - Form feed
\? - Question mark
*/
#include <stdio.h>

int main(void)
{
  printf("Hello\nWorld\n");
  printf("Name:\tRaj Khan\n");
  printf("He said, \"Hello!\"\n");
  printf("C:\\Program Files\\App\n");

  return 0;
}

/**
Output:
Hello
World
Name:   Raj Khan
He said, "Hello!"
C:\Program Files\App
*/


/** PRINT
 * Name:        YOUR_NAME
 * University:  UNIVERSITY_NAME
 * Phone:       PHONE_NUMBER
 */
#include<stdio.h>

int main()
{
  printf("Name: \t\tMd. Murad Hossen\n");
  printf("University: \tIDB\n");
  printf("Phone: \t\t01415958741");
  return 0;
}