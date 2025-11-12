#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int mutltiplo(int n, int a, int b, int verificador)
{
    int res;

    if (b < a)
    {
        if (verificador == 0)
        {
            printf("INEXISTENTE");
            res = 0;
        }
        res = 0;
    }
    else
    {
        if (a % n == 0)
        {
            printf("%d\n", a);
            a = a + 1;
            verificador = 1;
            res = mutltiplo(n, a, b, verificador);
        }
        else
        {
            a = a + 1;
            res = mutltiplo(n, a, b, verificador);
        }
    }

    return res;
}

int main()
{
    int n, a, b, res;
    scanf("%d%d%d", &n, &a, &b);

    res = mutltiplo(n, a, b, 0);

    return 0;
}