// use to make visenere -- getting alpha values from command line and getting array positon for the letter
#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
            printf("Usage: strings \"phrases\"\n");
            exit(1);
    }
    // printf("%i\n", argc);
    // int length = string(arg[i]);
    // printf("%i\t%s\n", lenght, argv[0);

        for(int i = 0, length = strlen(argv[1]); i < length; i++)
        {
            if (isalpha(argv[1][i]))
            {
                printf("argv1 = |%c| is an alphabet\n", argv[1][i]);
                // continue to next code
            }
            else if (!isalpha(argv[1][i]))
            {
                printf("Please only use alphabetic characters in the command line key\n");
                return(1);
            }

            if (argv[1][i] != 32)
            //  put in for loop to read the character
            // (isalpha(argv[1]))
            {
            printf("the character at pos %i: %c\n", i, argv[1][i]);

            }

        }
}