#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//  atoi(string str); converts string into an integer

int main(int argc, string argv[])
//  arg c has 2 values ./ceasar and the key
{
    //int j;
    //int i = 0;
    // int n = strlen(argv[i]);
    // string num = "2";

    // this block demands 2 command line arguments and returns a request for 2 arguments
     if (argc != 2)
    {
        printf("Please use 2 command-line arguments\n");
        return 1;
    }

    // test print to say the key is working  DELETE BEFORE FINAL COMPILE
    printf("hello, %s\n", argv[1]);
    int key = atoi(argv[1]);    // declare k as an int as per directions, convert glyph to number
    int lower;

    // print the key value to see it's working
    printf("this is (argv[1]):%i\n", key);

    // scanf("%i", n);

    // a maybe redundant test to see that the key has been stored
    printf("argvi print %s\n", argv[1]);

    // prompt for a the plaintext variable to encrypt
    string s = get_string("plaintext: ");
    printf("ciphertext: ");

    // print test that the is working
    //printf("plaintext entered is: %s\n", s);

        // for loop converts ascii to numeric value
        for (int i = 0; i < strlen(s); i++)
        {
            // print check that ascii converts to value
            // printf("for loop %c %i\n", s[i], (int) s[i]);


                if(isupper(s[i]))
                {
                    // printf("var1 = |%c| is uppercase character\n", s[i]);
                    // do upper case math
                    int upper = (((int) s[i] - 65) + key);
                    upper = (upper % 26) + 65;
                    // printf("got conversion upper %i %c\n", upper, upper);
                    printf("%c", upper);

                }
                else
                {
                    // printf("var is lowercase");
                    lower = (((int) s[i] - 97) + key);
                    lower = (lower % 26) + 97;
                    // printf("got conversion lower %i %c\n", lower, lower);
                    // do lower case math
                    // (int) s[i] - 97
                    // add key
                    // % 26
                    // convert %c to cyphertext
                    printf("%c", lower);
                }


            // is it alpha
                // then is it upper
                // is it lower
                // then convert letter to ascii number
                // and then convert to formula for ciphertext
        }

    // }
    // then print the ascii value of the ciphertext. below text might or might not work
    // printf("ASCII value of %s = %s\n", argv[i], argv[i]);

    // }
    //  int converted = atoi("d");
    // printf("%d\n", converted);
    printf("\n");
    return 0;



    //retrun ("ciphertext: \n" );
}


// use atoi to convert plaintext to integers
// int atoi(string str);  use to convert a string to an integer


 // for (int k = 0; k < argv[1]; k++)
    // {
        // for (int j = 0; j < n; j++)
        // {
        //     eprintf("looping");
        //     printf("%c\n", argv[j]);
        // }

