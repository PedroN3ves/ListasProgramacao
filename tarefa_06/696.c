#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void preencher(int arr[], int i, int tam)
{
    if (i == tam)
    {
        return;
    }

    scanf("%d", &arr[i]);
    preencher(arr, i + 1, tam);
}

int contarOcorrencias(int num, int arr[], int tam)
{
    if (tam == 0)
    {
        return 0;
    }
    if (arr[tam - 1] == num)
    {
        return 1 + contarOcorrencias(num, arr, tam - 1);
    }
    else
    {
        return contarOcorrencias(num, arr, tam - 1);
    }
}

int main()
{
    int valor, total;
    int numeros[10];

    preencher(numeros, 0, 10);
    scanf("%d", &valor);
    total = contarOcorrencias(valor, numeros, 10);
    printf("%d\n", total);

    return 0;
}
