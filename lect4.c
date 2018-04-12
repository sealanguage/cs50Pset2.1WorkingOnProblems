// use built in C functions to change lower to upper case
#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("before: ");
    printf("after: ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (islower(s[i]))    // returns boolean t/f value
        {
            printf("%c", toupper(s[i]));    // returns the upper case version of the character
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
}