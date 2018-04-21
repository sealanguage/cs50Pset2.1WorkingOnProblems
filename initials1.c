// initials 1
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string s = get_string("Type your name: ");


        for (int i = 0; i < strlen(s); i++)
    {
        if
        printf("%c\n", s[i]);

    }
//
    if (isspace(' ') && isspace('\n'))
    {
        printf("Both characters are white-spaces!\n");
    }

    // printf("output: %s\n", s);

}


// if (isspace(' ');
// int isspace(int c);