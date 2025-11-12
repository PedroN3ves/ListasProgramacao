#include <stdio.h>

void escanear_matriz(int m, int matriz[][m])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
}

int somatorio_matriz(int m, int matriz[][m], int soma)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            soma += matriz[i][j];
        }
    }
    return soma;
}

int achar_maior_valor(int m, int matriz[][m])
{
    int valor = matriz[0][0];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matriz[i][j] > valor)
            {
                valor = matriz[i][j];
            }
        }
    }
    return valor;
}

int somatorio_diagonal_principal(int m, int matriz[][m], int diagona_pricipal)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == j)
            {
                diagona_pricipal += matriz[i][j];
            }
        }
    }
    return diagona_pricipal;
}

int achar_delta(int maior_valor)
{
    if (maior_valor > 0)
    {
        return 1;
    }
    else if (maior_valor < 0)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int matriz[3][3], res_somatorio, maior_valor, delta, diagona_pricipal;
    double media;
    escanear_matriz(3, matriz);

    res_somatorio = somatorio_matriz(3, matriz, 0);
    media = (double)res_somatorio / (3 * 3); // linhas * colunas

    maior_valor = achar_maior_valor(3, matriz);
    delta = achar_delta(maior_valor);
    diagona_pricipal = somatorio_diagonal_principal(3, matriz, 0);

    printf("%.2lf %d %d %d", media, maior_valor, delta, diagona_pricipal);

    return 0;
}