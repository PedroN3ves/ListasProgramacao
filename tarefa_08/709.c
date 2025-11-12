#include <stdio.h>

void jogar_sapos(int n, int m, int o, int tabuleiro[n], int dados[o][m])
{
    int posicoes[m];

    for (int i = 0; i < m; i++)
    {
        posicoes[i] = 0;
    }

    for (int rodada = 0; rodada < o; rodada++)
    {
        for (int jogador = 0; jogador < m; jogador++)
        {
            int dado = dados[rodada][jogador];
            posicoes[jogador] = (posicoes[jogador] + dado) % n;
            if (posicoes[jogador] < 0)
                posicoes[jogador] += n;
            posicoes[jogador] = (posicoes[jogador] + tabuleiro[posicoes[jogador]]) % n;
            if (posicoes[jogador] < 0)
                posicoes[jogador] += n;
        }
    }

    for (int i = 0; i < m; i++)
    {
        printf("%d\n", posicoes[i]);
    }
}

int main()
{
    int n, m, o;
    scanf("%d %d %d", &n, &m, &o);

    int tabuleiro[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &tabuleiro[i]);
    }

    int dados[o][m];
    for (int i = 0; i < o; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &dados[i][j]);
        }
    }

    jogar_sapos(n, m, o, tabuleiro, dados);

    return 0;
}
