/** Using command line arguments, write a program check a year is leap year or not. */

#include <stdio.h>
#include <stdlib.h>

int main(int argn, char *argv[])
{
    int n, i;

    if (argn != 2)
    {
        printf("Enter a year.\n");
        exit(0);
    }

    n = atoi(argv[1]);

    if ((n % 100 != 0 && n % 4 == 0) || n % 400 == 0)
        printf("The year is leap year.\n");
    else
        printf("The year is not leap year.\n");
        
    return 0;
}

