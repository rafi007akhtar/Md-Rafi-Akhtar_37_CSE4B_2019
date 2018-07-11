/** Using command line arguments, write a program to input a given range (a,b) and calculate the sum of all odd and even numbers within the range */

#include <stdio.h>
#include <stdlib.h>

int main(int argn, char *argv[])
{
    int a, b, odd, even, i;

    if (argn != 3)
    {
        printf("Please enter the correct range\n");
        exit(0);
    }

    a = atoi(argv[1]);
    b = atoi(argv[2]);

    odd = even = 0; // counters for number of elements
    for (i = a; i <=b; i++) // ASSUMPTION: both inclusive
    {
        if (i % 2) odd++;
        else even++;
    }

    printf("Odd numbers = %d \nEven numbers = %d\n", odd, even);
    
    return 0;
}