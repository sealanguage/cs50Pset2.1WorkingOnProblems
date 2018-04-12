//  this code counts the number of characters typed in the terminal
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string s = get_string();
    int n = 0;     // create variable n to store string
    while (s[n] != '\0')   // and check that the character at index is not null
    {
        n++;    // then increment it
    }
    printf("%i\n", n);   // print out what the counter reached
}
//