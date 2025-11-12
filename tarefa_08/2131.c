#include <stdio.h>

void ler_matriz(int n, int m, int matriz[][m])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
}

void imprimir_matriz(int n, int m, int matriz[][m])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d\t", matriz[i][j]);
        }

        printf("\n");
    }
}

void apurar_votos(int p, int e, int matriz[][p], int qtd[])
{
    for (int i = 0; i < p; i++)
    {
        qtd[i] = 0;
        for (int j = 0; j < e; j++)
        {
            if (matriz[j][i] == 1)
            {
                qtd[i]++;
            }
        }
    }
}

void printar_array(int p, int qtd_votos[])
{
    for (int i = 0; i < p; i++)
    {
        printf("Princesa %d: %d voto(s)\n", i + 1, qtd_votos[i]);
    }
}

int main()
{
    // e = linhas, p = colunas
    int e, p;
    scanf("%d%d", &p, &e);
    int votos[e][p];
    int qtd_votos[p];

    ler_matriz(p, e, votos);
    // imprimir_matriz(e, p, votos);
    apurar_votos(p, e, votos, qtd_votos);
    printar_array(p, qtd_votos);

    return 0;
}