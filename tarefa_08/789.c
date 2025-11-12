#include <stdio.h>
#include <stdbool.h>

const int TAM = 9;

bool verificaLinha(int grid[TAM][TAM], int linha)
{
    bool numerosPresentes[TAM + 1] = {false};
    for (int coluna = 0; coluna < TAM; coluna++)
    {
        int valor = grid[linha][coluna];
        if (valor < 1 || valor > 9 || numerosPresentes[valor])
        {
            return false;
        }
        numerosPresentes[valor] = true;
    }
    return true;
}

bool verificaColuna(int grid[TAM][TAM], int coluna)
{
    bool numerosPresentes[TAM + 1] = {false};
    for (int linha = 0; linha < TAM; linha++)
    {
        int valor = grid[linha][coluna];
        if (valor < 1 || valor > 9 || numerosPresentes[valor])
        {
            return false;
        }
        numerosPresentes[valor] = true;
    }
    return true;
}

bool verificaBloco(int grid[TAM][TAM], int baseLinha, int baseColuna)
{
    bool numerosPresentes[TAM + 1] = {false};
    for (int i = baseLinha; i < baseLinha + 3; i++)
    {
        for (int j = baseColuna; j < baseColuna + 3; j++)
        {
            int valor = grid[i][j];
            if (valor < 1 || valor > 9 || numerosPresentes[valor])
            {
                return false;
            }
            numerosPresentes[valor] = true;
        }
    }
    return true;
}

bool checaGridCompleto(int grid[TAM][TAM])
{
    for (int idx = 0; idx < TAM; idx++)
    {
        if (!verificaLinha(grid, idx) || !verificaColuna(grid, idx))
        {
            return false;
        }
    }

    for (int i = 0; i < TAM; i += 3)
    {
        for (int j = 0; j < TAM; j += 3)
        {
            if (!verificaBloco(grid, i, j))
            {
                return false;
            }
        }
    }

    return true;
}

void leGrid(int grid[TAM][TAM])
{
    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < TAM; j++)
        {
            scanf("%d", &grid[i][j]);
        }
    }
}

void processaInstancias(int numInstancias)
{
    for (int atual = 1; atual <= numInstancias; atual++)
    {
        int sudoku[TAM][TAM];
        leGrid(sudoku);

        printf("Instancia %d\n", atual);
        if (checaGridCompleto(sudoku))
        {
            printf("SIM\n");
        }
        else
        {
            printf("NAO\n");
        }
        printf("\n");
    }
}

int main()
{
    int casosTeste;
    scanf("%d", &casosTeste);
    processaInstancias(casosTeste);

    return 0;
}
