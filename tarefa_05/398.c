#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int multiplos(int a, int b, int contador)
{
    if (contador >= 50)
    {
        return 0;
    }

    if (contador % a == 0 && contador % b == 0)
    {
        return 1 + multiplos(a, b, contador + 1);
    }
    else
    {
        return multiplos(a, b, contador + 1);
    }
}

int main()
{
    int valor1, valor2;
    scanf("%d %d", &valor1, &valor2);

    int resultado = multiplos(valor1, valor2, 1);

    printf("%d\n", resultado);

    return 0;
}
