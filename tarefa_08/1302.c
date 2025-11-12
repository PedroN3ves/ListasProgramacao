#include <stdio.h>

void ler_matriz(int matriz[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
}

double calc_media(int matriz[][3], int total)
{
    int contador_positivos = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matriz[i][j] > 0)
            {
                total += matriz[i][j];
                contador_positivos += 1;
            }
        }
    }

    return (double)total / contador_positivos;
}

int achar_menor_valor(int matriz[][3])
{
    int aux = matriz[0][0];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matriz[i][j] < aux)
            {
                aux = matriz[i][j];
            }
        }
    }
    return aux;
}

int achar_delta(int matriz[][3], int menor_valor)
{
    if (menor_valor % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int achar_soma_sem_diagonal(int matriz[][3], int total)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i != j)
            {
                total += matriz[i][j];
            }
        }
    }
    return total;
}

int main()
{
    int matriz[3][3];
    double media;
    int menor_valor, delta, soma_sem_diagonal;

    ler_matriz(matriz);
    media = calc_media(matriz, 0);
    menor_valor = achar_menor_valor(matriz);
    delta = achar_delta(matriz, menor_valor);
    soma_sem_diagonal = achar_soma_sem_diagonal(matriz, 0);

    printf("%.2lf %d %d %d", media, menor_valor, delta, soma_sem_diagonal);

    return 0;
}