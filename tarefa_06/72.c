#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void preencher_array(int numeros[], int indice, int tamanho)
{
    if (indice == tamanho)
    {
        return;
    }

    scanf("%d", &numeros[indice]);
    preencher_array(numeros, indice + 1, tamanho);
}

void inverter_array(int numeros[], int inicio, int fim)
{
    if (inicio >= fim)
    {
        return;
    }

    int temporario = numeros[inicio];
    numeros[inicio] = numeros[fim];
    numeros[fim] = temporario;

    inverter_array(numeros, inicio + 1, fim - 1);
}

void exibir_array(int numeros[], int indice, int tamanho)
{
    if (indice < tamanho)
    {
        printf("%d ", numeros[indice]);
        exibir_array(numeros, indice + 1, tamanho);
    }
}

int main()
{
    int tamanho;
    scanf("%d", &tamanho);
    int array[tamanho];

    preencher_array(array, 0, tamanho);
    inverter_array(array, 0, tamanho - 1);
    exibir_array(array, 0, tamanho);
    printf("\n");

    return 0;
}
