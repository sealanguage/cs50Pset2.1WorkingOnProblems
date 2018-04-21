// first version of vigenere combined with caesar, compiles but not combined yet
#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[])
{
    string key = (argv[1]);
    int keylength = strlen(key);
    char i;
    //char k;

    char myChar = key[i];
    printf("%c\n", myChar); // Prints s

    if (argc != 2)
    // error message for non alpha command line entry
    {
            printf("Please enter ./vigenere and alphabetic key string Usage: strings \"phrases\"\n");
            exit(1);
    }
                                            // printf("%i\n", argc);
                                            // int length = string(arg[i]);
                                            // printf("%i\t%s\n", lenght, argv[0);

        // loop that iterates through the key letters for array position
        for(int i = 0, length = strlen(key); i < length; i++)
        {
            if (isalpha(argv[1][i]))
            {
                //keylenght = (argv[1][i]);
                printf("argv1 = |%c| is an alphabet\n", argv[1][i]);  // for alphabetic
                // continue to next code
            }
            else if (!isalpha(argv[1][i]))
            {
                printf("Please only use alphabetic characters in the command line key\n");  // kills non alpha entries
                return(1);
            }
            // this code prints letters to terminal. don't need it in final
            if (argv[1][i] != 32)
            //  put in for loop to read the character
            {
            printf("the character at pos %i: %c\n", i, argv[1][i]);
            }
        }
    //don't think I need this to change key to number. it's from caesar
    // int key = atoi(argv[1]);    // declare k as an int as per directions, convert glyph to number
    int lower;

    // prompt for a the plaintext variable to encrypt
    string s = get_string("plaintext: ");
    printf("ciphertext: ");

    // for loop converts ascii to numeric value
    for (int i = 0; i < strlen(s); i++)
    // {
        // add isalpha check here
        if (isalpha(s[i]))
        {
            if (isupper(s[i]))
            {
                // do upper case math
                int upper = (((int) s[i] - 65) + keylength[i]);
                upper = (upper % 26) + 65;
                printf("got conversion upper %i %c\n", upper, upper);
                printf("%c", upper);
            }
            else
            {
                // do lower case math
                lower = (((int) s[i] - 97) + keylength[i]);
                lower = (lower % 26) + 97;
                printf("%c", lower);
            }
        }
        else
        {
            printf("%c", s[i]);
        }
    // }

    // // from caesar for loop converts ascii to numeric value
    // for (int i = 0; i < strlen(s); i++)
    // {
    //     // add isalpha check here
    //     if (isalpha(s[i]))
    //     {
    //         if (isupper(s[i]))
    //         {
    //             // do upper case math
    //             int upper = (((int) s[i] - 65) + keylength[i]);
    //             upper = (upper % 26) + 65;
    //             // printf("got conversion upper %i %c\n", upper, upper);
    //             printf("%c", upper);
    //         }
    //         else
    //         {
    //             // do lower case math
    //             lower = (((int) s[i] - 97) + keylength[i]);
    //             lower = (lower % 26) + 97;
    //             printf("%c", lower);
    //         }
    //     }
    //     else
    //     {
    //         printf("%c", s[i]);
    //     }
    // }

    printf("\n");
    return 0;
}


