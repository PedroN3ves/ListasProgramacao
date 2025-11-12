#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int separador(int n, int contador)
{
    int div;

    if (n == 0)
    {
        return contador;
    }
    else
    {
        div = n % 10;
        if (div % 2 == 0)
        {
            contador = contador + 1;
            n = n / 10;
            return separador(n, contador);
        }
        else
        {
            n = n / 10;
            return separador(n, contador);
        }
    }

    return contador;
}

int main()
{
    int n, contador;
    scanf("%d", &n);

    contador = separador(n, 0);
    printf("%d", contador);

    return 0;
}
