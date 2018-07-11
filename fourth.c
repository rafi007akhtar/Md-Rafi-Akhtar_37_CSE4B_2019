/** Write a C program to input a string to reverse it. */

#include <stdio.h>
#include <stdlib.h>

int main(int argn, char *argv[])
{
    char *str, rev[100]; // assumption 1: length of string <= 100 chars
    int i, len, pos;

    if (argn != 2)
    {
        printf("Error: Please enter a valid string enclosed in double quotes \"\"  or single quotes '' \n");
        exit(0);
    }

    str = argv[1]; // assumption 2: user encloses string in "" or ''
    
    len = i = 0;
    while (str[i] != '\0') // calculate the length
    {
        len++;
        i++;
    }

    pos = 0;
    for (i = len-1; i >= 0; i--)
        rev[pos++] = str[i];

    printf("reverse (%s) = %s\n", str, rev);
    
    return 0;
}