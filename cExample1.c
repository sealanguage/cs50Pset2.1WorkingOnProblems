#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//  atoi(string str); converts string into an integer

// int argc, string argv[]
int main(void)
//  arg c has 2 values
{
    //  int k;    // declare k as an int as per directions
    //  string s = get_string(": ");

    int converted = atoi("5");

    printf("%d\n", converted);

// get plaintext for the cypher, uc lc remain as input


}

// isalpha
// isupper
// islower

// plaintext:
// ciphertext:

// get key from command line
// turn key into integer
// prompt for plaintext
// for each character in plaintext string
//    preserve case
//    shift plaintext character by key
// print ciphsetext