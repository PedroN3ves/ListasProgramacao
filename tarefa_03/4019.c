#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int fat(int n)
{
    int n_fat;

    if (n == 0)
    {
        n_fat = 1;
    }
    else
    {
        n_fat = n * fat(n - 1);
    }

    return n_fat;
}

int main()
{
    int n, n_fat;
    scanf("%d", &n);

    n_fat = fat(n);

    printf("%d", n_fat);

    return 0;
}