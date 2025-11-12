#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void armazenar(int a[], int i, int tamanho)
{
    if (i == tamanho)
    {
        return;
    }

    scanf("%d", &a[i]);

    if (a[i] == 0)
    {
        return;
    }

    return armazenar(a, i + 1, 100);
}

int maior_numero(int a[], int i, int x)
{
    if (a[i] != 0)
    {
        if (a[i] > x)
        {
            x = a[i];
            return maior_numero(a, i + 1, x);
        }
        return maior_numero(a, i + 1, x);
    }

    printf("%d", x);
    return 0;
}

int main()
{
    int sequencia[100];

    armazenar(sequencia, 0, 100);
    maior_numero(sequencia, 0, 0);

    return 0;
}

/*
Criar uma função que conta números e só para quando 0 for digitado, porém essa função conta com um limite de no máximo 100 números
Em seguida, o programa deverá imprimir o maior número dessa lista
*/