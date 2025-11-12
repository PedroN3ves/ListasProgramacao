#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int primo(int n, int x, int divisor)
{
    int divisao, res;

    if (x > n)
    {
        if (divisor > 2)
        {
            res = 0;
        }
        else if (divisor == 2)
        {
            res = 1;
        }
    }
    else
    {
        divisao = n % x;
        if (divisao == 0)
        {
            x = x + 1;
            divisor = divisor + 1;
            return primo(n, x, divisor);
        }
        else
        {
            x = x + 1;
            return primo(n, x, divisor);
        }
    }

    return res;
}

void verificar()
{
    int n, x, res;
    scanf("%d", &n);

    if (n != -1)
    {
        res = primo(n, 1, 0);
        printf("%d\n", res);
        return verificar();
    }
}

int main()
{
    verificar();

    return 0;
}