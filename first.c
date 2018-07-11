/** Using command line arguments, write a program to input a 5-digit number and print the reverse of it*/
#include <stdio.h>
#include <stdlib.h>

int main(int argn, char *argv[])
{
    int n, rev, rem;
    n = atoi(argv[1]); // the 5 digit number

    if (n < 10000 || n > 99999) // if it is not a 5-digit number
    {
        printf("Error: Number not having 5 digits\n");
        exit(0);
    }

    // otherwise, if it is a 5 valid 5 digit number
    rev = 0; // will store the reverse
    while (n > 0)
    {
        rev = rev*10 + n%10;
        n /= 10;
    }

    printf("Reverse = %d\n", rev);

    return 0;
}