#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

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

void imprimir_matriz(int m, int matriz[][m])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d\n", matriz[i][j]);
        }
    }
}

void soma_matriz(int m, int A[][m], int B[][m], int res_soma[][m])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            res_soma[i][j] = A[i][j] + B[i][j];
        }
    }
}

int main()
{
    int m;
    scanf("%d", &m);
    if (m == 0)
    {
        printf("Vazia");
    }

    int A[m][m], B[m][m];
    int res_soma[m][m];

    escanear_matriz(m, A);
    escanear_matriz(m, B);

    soma_matriz(m, A, B, res_soma);

    imprimir_matriz(m, res_soma);

    return 0;
}