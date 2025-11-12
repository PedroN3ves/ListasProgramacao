#include <stdio.h>
#include <stdbool.h>

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

void coordenadas(int c, char direcao[])
{
    for (int i = 0; i < c; i++)
    {
        scanf("\n%c", &direcao[i]);
    }
}

bool checagem(int x, int y, int n, int m, int mapa[n][m])
{
    if (mapa[x][y] == 0)
    {
        return false;
    }
    else if (mapa[x][y] == 1)
    {
        return true;
    }
}

void movimentacao(int c, char direcao[c], int x, int y, int n, int m, int mapa[n][m], bool checador)
{
    for (int i = 0; i < c; i++)
    {
        switch (direcao[i])
        {
        case 'C':
            if (x - 1 >= 0)
            {
                checador = checagem(x - 1, y, n, m, mapa);
                if (checador == true)
                {
                    x -= 1;
                }
                break;
            }

        case 'D':
            if (y + 1 < m)
            {
                checador = checagem(x, y + 1, n, m, mapa);
                if (checador == true)
                {
                    y += 1;
                }
                break;
            }

        case 'E':
            if (y - 1 >= 0)
            {
                checador = checagem(x, y - 1, n, m, mapa);
                if (checador == true)
                {
                    y -= 1;
                }
                break;
            }

        case 'B':
            if (x + 1 < n)
            {
                checador = checagem(x + 1, y, n, m, mapa);
                if (checador == true)
                {
                    x += 1;
                }
                break;
            }

        default:
            break;
        }
    }
    printf("(%d,%d)", x, y);
}

int main()
{
    // n = linhas, m = colunas, c = qtd caracteres, [x][y] = posição inicial
    int n, m, c, x, y;
    bool checador;

    scanf("%d%d", &n, &m);

    int mapa[n][m];
    ler_matriz(n, m, mapa);

    scanf("%d", &c);
    char direcao[c];
    coordenadas(c, direcao);

    scanf("%d%d", &x, &y);

    movimentacao(c, direcao, x, y, n, m, mapa, checador);

    return 0;
}
