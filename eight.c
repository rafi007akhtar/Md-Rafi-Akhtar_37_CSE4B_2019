/** Using command line arguments, write a program check whether a number is prime or not. */

#include <stdio.h>
#include <stdlib.h>

int isPrime(int n);

int main(int argn, char *argv[])
{
    int n, i;

    if (argn != 2)
    {
        printf("Enter a number\n");
        exit(0);
    }

    n = atoi(argv[1]);

    int res = isPrime(n);

    (res) ? printf("%d is prime\n", n) : printf("%d is non-prime \n", n);
        
    return 0;
}

int isPrime(int n)
{
    int i, m;

    if (n == 2) return 1;
    if (n == 1 || n%2 == 0) return 0;

    m = n/2;
    for (i = 3; i <= m; i++)
    {
        if(!(n % i))
            return 0;
    }

    return 1;

}
