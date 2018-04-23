// first version of vigenere combined with caesar, compiles but not combined yet
#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[])
{
    string key = (argv[1]);
    printf("%s\n", key);

    // int keylength = strlen(key);
    // char i = 0;
    //char k;

    if (argc != 2)
    // error message for non alpha command line entry
    {
            printf("Please enter ./vigenere and alphabetic key string Usage: strings \"phrases\"\n");
            exit(1);
    }

        // loop that iterates through the key letters for array position
        for(int i = 0, length = strlen(key); i < length; i++)
        {
            if (isalpha(argv[1][i]))
            {
                // keylenght = (argv[1][i]);
                // printf("argv1 = |%c| is an alphabet\n", argv[1][i]);  // for alphabetic
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

            // this code gives the position info for each letter of the key
                // printf("use pos info %i\n", i);
            // keyposition = "%i";
            }
        }

    // int lower;

    // prompt for a the plaintext variable to encrypt
    string s = get_string("plaintext: ");
    // printf("the real ciphertext: %c\n", s[i]);

    // // for loop converts ascii to numeric value
    for (int i = 0; i < strlen(s); i++)
    {
        for (int j = 0; j < strlen(argv[1]); j++)
        //add isalpha check here
        if (isalpha(s[i]))
        {
            if (isupper(s[i]))
            {
                // do upper case math
                int upper = ((s[i]) - 65) % 26;
                int uppercon = (upper + argv[1][i]);
                // printf("got conversion upper %i %c\n", upper, upper);
                // printf("%c\n", upper);
                // printf("upper equation is %i + %i\n", upper, key[i]);
                // printf("solution %i %c", uppercon, uppercon);
                printf(" %c", uppercon);
            }
            else if (islower(s[i]))
            {
                // do lower case math
                int lower = (((s[i]) - 97) % 26);
                int cipher = (lower + argv[1][i]);
                // printf("lower result %i %c\n", cipher, cipher);
                // printf("lower equation is %i + %i\n", lower, argv[1][i]);
                // printf("the value for lower %i %c\n", lower, s[i]);
                // printf("solution %i %c", cipher, cipher);
                printf(" %c", cipher);
            }
            else if (isspace(s[i]) || ispunct(s[i]) ||isdigit(s[i]))
            {
                int other = (s[i]);
                // pass the value through
                // return 0;
                printf("the value for other %i %c\n", other, s[i]);
                printf("blanks %c", other);
            }

        }

}
    printf("ciphertext: \n");
    printf("\n");
    return 0;
}



