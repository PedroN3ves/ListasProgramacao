#include <stdio.h>
#include <math.h>
#include <string.h>
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

void verificar()
{
    int n, n_fat;
    scanf("%d", &n);

    if (n != -1)
    {
        n_fat = fat(n);
        printf("%d\n", n_fat);
        verificar();
    }
}

int main()
{
    verificar();

    return 0;
}