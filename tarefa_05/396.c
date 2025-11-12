#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

double valor_multa(int a[], int i)
{
    if (a[i] > 2)
    {
        return (a[i] - 2) * 12.89;
    }
    return 0;
}

void armazenar_casas(int a[], int i)
{
    scanf("%d", &a[i]);
    if (a[i] == 999)
    {
        return;
    }
    return armazenar_casas(a, i + 1);
}

void multas(int a[], int i, int casas_multadas, double valor_total_multas)
{
    if (a[i] == 999)
    {
        printf("%.2lf\n%d", valor_total_multas, casas_multadas);
        return;
    }

    if (a[i] > 2)
    {
        valor_total_multas += valor_multa(a, i);
        return multas(a, i + 1, casas_multadas + 1, valor_total_multas);
    }
    return multas(a, i + 1, casas_multadas, valor_total_multas);
}

int main()
{
    int casas[100];

    armazenar_casas(casas, 0);
    multas(casas, 0, 0, 0);

    return 0;
}

/*
    receber um número n de entradas até que n == 999, essas entradas serão números inteiros e representam quantida de veiculos por casa
    casas com mais de dois veiculos receberam uma multa de 12.89 por veiculo excedente
    a saída deverá ser o valor total das multas e a quantidade de casas multadas
*/