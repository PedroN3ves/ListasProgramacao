#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void armazenar(double a[], int i, int tamanho)
{
    if (i < tamanho)
    {
        scanf("%lf", &a[i]);
        return armazenar(a, i + 1, 4);
    }
}

void bubble(double a[], int i, int tamanho)
{
    if (i < tamanho - 1)
    {
        if (a[i] > a[i + 1])
        {
            double aux = a[i];

            a[i] = a[i + 1];
            a[i + 1] = aux;
        }

        bubble(a, i + 1, tamanho);
    }
}

void bubble_sort(double a[], int i, int tamanho)
{
    if (i < tamanho - 1)
    {
        bubble(a, 0, tamanho - i);
        bubble_sort(a, i + 1, tamanho);
    }
}

void organizar(double n[], double ordenado[])
{
    ordenado[0] = n[0];
    ordenado[1] = n[2];
    ordenado[2] = n[3];
    ordenado[3] = n[1];
}

void ler(double a[], int i, int tamanho)
{
    if (i < tamanho)
    {
        printf("%.2lf\n", a[i]);
        return ler(a, i + 1, 4);
    }
}

int main()
{
    double n[4], ordenado[4];

    armazenar(n, 0, 4);
    bubble_sort(n, 0, 4);
    organizar(n, ordenado);
    ler(ordenado, 0, 4);

    return 0;
}

/*
Criar um código que pegue um array de 4 elementos e ordene seus elementos por uma ordem especifica, como explicado no enunciado

1° - 3° - 4° - 2°
*/