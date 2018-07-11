/** Using command line arguments, write a program to input a decimal number and convert it to its corresponding binary format. */

#include <stdio.h>
#include <stdlib.h>

int main(int argn, char *argv[])
{
    int bin[100], i, dec, pos;

    if (argn != 2)
    {
        printf("Enter a valid decimal number\n");
        exit(0);
    }

    dec = atoi(argv[1]);
    pos = 0;

    while (dec > 0)
    {
        bin[pos++] = dec % 2;
        dec /= 2;
    }

    printf("Binary equivalent:\n");
    for (i = pos-1; i >= 0; i--)
        printf("%d", bin[i]);
    printf("\n");
    
    return 0;
}