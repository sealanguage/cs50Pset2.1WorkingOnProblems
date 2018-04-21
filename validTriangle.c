// THIS FILE DOES NOT COMPILE CORRECTLY BUT SHOWS HOW TO
#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define COURSE "CS50"  // DEFINED CONSTANT WILL REPLACE ANY MENTION OF COURSE TO CS50 - LIKE SEARCH REPLACE FUNCTION

    float valid_triangle(float x, float y, float z);

    float valid_triangle(float x, float y, float z)
    {


    // check that sides must have positive length
        if (x <= 0 || y <= 0 || z <= 0)
        {
            return false;
        }
        // check that sum of any 2 sides will be greater than the 3rd side
        if ((x + y <= z || x + z <= y || y + z <= x))
        {
            return false;
        }
        return true;
    }
