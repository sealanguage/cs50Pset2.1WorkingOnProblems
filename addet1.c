#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// a function to multiply 2 floating point numbers

float multiplyFloats(float a, float b)
{
    float product = a * b;
    return product;
}

int add_two_ints(int a, int b);

int add_two_ints(int a, int b)
{
    int sum = a + b;
    return sum;
}

int main(void)
{
    // ask user for input
    printf("Give me an integer: ");
    int x = get_int();
    printf("Give me another integer: ");
    int y = get_int();

    //add the two numbers together via a function call
    int z = add_two_ints(x, y);

    // output the result
    printf("The sum of %i and %i is %i!\n", x, y, z);

}



