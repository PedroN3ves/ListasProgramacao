#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int triangular(int n, int x)
{
    int teste = x * (x + 1) * (x + 2);

    if (n == teste && n != 0)
    {
        printf("%d * %d * %d = %d\nVerdadeiro", x, x + 1, x + 2, n);
        return 0;
    }
    else
    {
        if (x == n || n < 0)
        {
            printf("Falso");
            return 0;
        }
        x += 1;
        return triangular(n, x);
    }
}

int main()
{
    int n, teste;
    scanf("%d", &n);

    triangular(n, 0);
    return 0;
}