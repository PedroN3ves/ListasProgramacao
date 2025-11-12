#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

bool eh_primo(int divisor, int x, int contador)
{
    if (contador > x / 2 || divisor > 1)
    {
        if (divisor == 1)
            return true;
        return false;
    }
    else
    {
        if (x % contador == 0)
        {
            divisor += 1;
        }
        contador += 1;
    }
    return eh_primo(divisor, x, contador);
}

int proximo_primo(int y)
{
    if (eh_primo(0, y, 1) == 1)
    {
        return y;
    }
    if (y == 1)
    {
        return 1;
    }
    else
    {
        return proximo_primo(y + 1);
    }
}

int fatorial(int z)
{
    if (z == 1 || z == 0)
    {
        return z;
    }
    return z * fatorial(z - 1);
}

void serie(int contador, double n, double res)
{
    double prox = proximo_primo(contador);

    if (contador == n)
    {
        printf("%d!/%.0lf", contador, prox);
        res += fatorial(contador) / prox * 1.0;
        printf("\n%.2lf", res);
        return;
    }
    else if (n == 0)
    {
        printf("0.00");
        return;
    }
    printf("%d!/%.0lf + ", contador, prox);
    res += fatorial(contador) / prox * 1.0;

    return serie(contador + 1, n, res);
}

int main()
{
    double n;
    scanf("%lf", &n);

    serie(1, n, 0);

    return 0;
}