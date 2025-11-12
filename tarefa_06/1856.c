#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void capturarValores(int valores[], int indice, int tamanho)
{
    if (indice == tamanho)
    {
        return;
    }

    scanf("%d", &valores[indice]);
    capturarValores(valores, indice + 1, tamanho);
}

void encontrarMenor(int *nums, int n, int *min)
{
    if (n == 0)
    {
        return;
    }

    if (*min == 0 && n == 6)
    {
        *min = nums[0];
    }

    if (nums[0] < *min)
    {
        *min = nums[0];
    }

    encontrarMenor(nums + 1, n - 1, min);
}

void encontrarMaior(int *nums, int n, int *max)
{
    if (n == 0)
    {
        return;
    }

    if (*max == 0 && n == 6)
    {
        *max = nums[0];
    }

    if (nums[0] > *max)
    {
        *max = nums[0];
    }

    encontrarMaior(nums + 1, n - 1, max);
}

int main()
{
    int numeros[6] = {0};
    int valorMinimo = 0, valorMaximo = 0;

    capturarValores(numeros, 0, 6);

    encontrarMenor(numeros, 6, &valorMinimo);
    encontrarMaior(numeros, 6, &valorMaximo);

    printf("%d\n", valorMinimo);
    printf("%d\n", valorMaximo);

    return 0;
}
