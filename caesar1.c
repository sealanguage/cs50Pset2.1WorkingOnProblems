// use this for vigenere, loop through key

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//  atoi(string str); converts string into an integer

int main(int argc, string argv[])
//  arg c has 2 values ./ceasar and the key
{
    int j;
    int k = 0;
    //int i;
    // int n = strlen(argv[i]);
    // string num = "2";

    // string s = get_string("plaintext: ");
    string key = (argv[1]);

     if (argc != 2)
    {
        printf("missing command-line argument\n");
        return 1;
    }


    for (j = 0; j < strlen(key); j++)scanf("%s", argv[1]);
    {

        printf("key letters: %s\n", key);
        printf("key letters: %c\n", j);

    }


    printf("hello, %s\n", argv[1]);
    // int k = atoi(argv[1]);    // declare k as an int as per directions
    printf("this is (argv[1]):%c\n", k);




    printf("argvi print %s\n", argv[1]);

        // loops through the key, puts each loop into index 0 - strlen
        for (k = 0; k < strlen(argv[1]); k++)
        {
            printf("for loop %s %i\n", argv[1], (int) k);

            if (isalpha (k))
            {
            printf("key is alpha %s", argv[1]);
            }

        }

    // then print the ascii value of the ciphertext. below text might or might not work
    // printf("ASCII value of %s = %s\n", argv[i], argv[i]);


    printf("\n");
    return 0;



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

