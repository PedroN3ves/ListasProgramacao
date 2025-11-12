#include <stdio.h>

void ler_matriz(int n, int m, int matriz[][m])
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &matriz[i][0]);
    }
    for (int j = 1; j < m; j++)
    {
        for (int i = 0; i < n; i++)
        {
            matriz[i][j] = matriz[i][0];
        }
    }
}

void imprimir_circular(int n, int m, int array[][m], int posicao)
{
    if (posicao < 0)
    {
        posicao += n;
    }

    int i = 2;
    int aux_i = i;
    for (i; i < n + aux_i; i++)
    {
        printf("%d ", array[(i + posicao) % n][0]);
    }
}

int main()
{
    int n = 5, m = 3;
    int matriz[n][m];

    ler_matriz(n, m, matriz);
    imprimir_circular(n, m, matriz, -4);

    return 0;
}

/*
void movimentacao(int n, int m, int tabuleiro[][m], int valor_casa, int i)
{
    if (valor_casa < 0)
    {

    }

    int aux_i = i;
    for (i; i < n + aux_i; i++)
    {
        printf("%d ", tabuleiro[(i + valor_casa) % n][0]);
    }
    printf("\nposicao atual: %d", (aux_i + valor_casa) % n);
}
*/