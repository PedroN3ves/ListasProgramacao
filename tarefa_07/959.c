#include <stdio.h>
#include <math.h>

void escanear_sequencia(int n, int x, int y, int z, int matriz[][x])
{
    int aux = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < x; j++)
        {
            if (aux <= y)
            {
                matriz[i][j] = aux;
                aux += z;
            }
            else
            {
                matriz[i][j] = -1;
            }
        }
    }
}

void imprimir_matriz(int n, int m, int matriz[][m])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matriz[i][j] != -1)
            {
                if (j == (m - 1))
                {
                    printf("%d", matriz[i][j]);
                }
                else
                {
                    printf("%d ", matriz[i][j]);
                }
            }
        }
        printf("\n");
    }
}

int main()
{
    int x, y, z;
    scanf("%d%d%d", &x, &y, &z);

    int n = ceil((double)y / (x * z));

    int matriz[n][x];
    escanear_sequencia(n, x, y, z, matriz);
    imprimir_matriz(n, x, matriz);

    return 0;
}