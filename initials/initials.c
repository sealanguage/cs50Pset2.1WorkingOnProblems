#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    // prompt for a name
    // print name to terminal
    // grab 1st letter of first name to initial string variable
      int c;
      string s = get_string("Enter a name: \n");
      printf("%c", toupper(s[0]));
      int length = strlen(s);
        for (c = 0; c < length; c++)
        {
            // eprintf("loop working");
            if (s[c] == ' ')
            {
            printf("%c", toupper(s[c + 1]));
            }
        }
        printf("\n");
        //  printf("string s %s\n", s);
}

    // loop string to find space character
    // add first letter after space character to initial string variable

    // make initial string variable capital letters
    // print initial string to terminal