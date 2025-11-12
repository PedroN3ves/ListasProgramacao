#include <stdio.h>
#include <stdbool.h>

bool checarGolpe(int dimensao, int matriz[dimensao][dimensao])
{
    int somaPrincipal = 1, somaSecundaria = 1;
    for (int i = 0; i < dimensao; i++)
    {
        for (int j = 0; j < dimensao; j++)
        {
            if (i == j && matriz[i][j] != 1)
                somaPrincipal = 0;
            if (i + j == dimensao - 1 && matriz[i][j] != 1)
                somaSecundaria = 0;
            if (i != j && i + j != dimensao - 1 && matriz[i][j] != 0)
                return false;
        }
    }
    return somaPrincipal || somaSecundaria;
}

void aplicarPenalidade(int penalidade, int *energia1, int *energia2, int tipo1, int tipo2)
{
    if (tipo1 == tipo2)
    {
        *energia1 -= penalidade;
        *energia2 -= penalidade;
    }
}

void lerMatriz(int dimensao, int matriz[dimensao][dimensao])
{
    for (int i = 0; i < dimensao; i++)
    {
        for (int j = 0; j < dimensao; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
}

void determinarVencedor(int energia1, int energia2)
{
    if (energia1 > energia2)
    {
        printf("Luke Skywalker venceu.\n");
    }
    else if (energia2 > energia1)
    {
        printf("Darth Vader venceu.\n");
    }
    else
    {
        printf("Houve empate.\n");
    }
}

int main()
{
    int dimensao = 3, penalidade = 15;
    int energia1, energia2;
    int matriz1[dimensao][dimensao], matriz2[dimensao][dimensao];

    scanf("%d %d", &energia1, &energia2);

    while (scanf("%d", &matriz1[0][0]) != EOF)
    {
        for (int i = 0; i < dimensao; i++)
        {
            for (int j = (i == 0 ? 1 : 0); j < dimensao; j++)
            {
                scanf("%d", &matriz1[i][j]);
            }
        }

        lerMatriz(dimensao, matriz2);

        bool golpe1 = checarGolpe(dimensao, matriz1);
        bool golpe2 = checarGolpe(dimensao, matriz2);

        if (golpe1 && golpe2)
        {
            aplicarPenalidade(penalidade, &energia1, &energia2, matriz1[0][0], matriz2[0][0]);
        }
        else if (golpe1)
        {
            energia2 -= penalidade;
        }
        else if (golpe2)
        {
            energia1 -= penalidade;
        }
    }

    determinarVencedor(energia1, energia2);

    return 0;
}
