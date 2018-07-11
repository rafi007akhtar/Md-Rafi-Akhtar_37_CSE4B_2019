/** Using command line arguments, write a program to find the factorial of a number. */

#include <stdio.h>
#include <stdlib.h>

int main(int argn, char *argv[])
{
    int n, i;
    long int p;

    if (argn != 2)
    {
        printf("Enter a number\n");
        exit(0);
    }

    n = atoi(argv[1]);

    p = 1;
    for (i = 2; i <= n; i++)
        p *= i;
    
    printf("%d! = %ld\n", n, p);
    
    return 0;
}