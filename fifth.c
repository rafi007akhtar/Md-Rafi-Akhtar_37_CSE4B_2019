/** Write a C program to input the base and sides of a triangle. Calculate the hypotenuse upto 2 decimal place. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argn, char *argv[])
{
    int side1, side2;
    float hyp;

    if (argn != 3)
    {
        printf("Error: Needed lengths of both sides\n");
        exit(0);
    }

    side1 = atoi(argv[1]);
    side2 = atoi(argv[2]);

    hyp = sqrt(side1*side1 + side2*side2);
    printf("Hyp = %.2f units\n", hyp);
    
    return 0;
}