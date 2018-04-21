// command line argument based program
#include <cs50.h>
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
    // int length = string{arg[i];
    // printf("%i\t%s\n", lenght, argv[0);

        for(int i = 0, length = strlen(argv[1]); i < length; i++)
        {
            if (argv[1][i] != 32)
            {
            printf("the character at pos %i: %c\n", i, argv[1][i] - 'a');
            }
        }
}