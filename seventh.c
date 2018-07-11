/** Using command line arguments, write a program to take a number n and generate the Fibonacci series upto nth term */

#include <stdio.h>
#include <stdlib.h>

int main(int argn, char *argv[])
{
    int n, term1, term2, nextTerm, i;

    if (argn != 2)
    {
        printf("Enter a number\n");
        exit(0);
    }

    n = atoi(argv[1]);

    printf("First %d Fibonacci numbers: \n", n);

    term1 = term2 = 1;
    nextTerm = 2;
    printf("%d \n%d \n%d \n", term1, term2, nextTerm);

    for (i = 4; i <= n; i++)
    {
        term1 = term2;
        term2 = nextTerm;
        nextTerm = term1 + term2;
        printf("%d \n", nextTerm);
    }
        
    return 0;
}