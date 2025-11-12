#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void ler_arrays(int dificuldade[], double valor_atual[], int i, int n)
{
    if (i < n)
    {
        scanf("%d %lf", &dificuldade[i], &valor_atual[i]);
        return ler_arrays(dificuldade, valor_atual, i + 1, n);
    }
}

void calc_preco(int dificuldade[], double valor_atual[], int i)
{
    if (valor_atual[i] > 100)
    {
        switch (dificuldade[i])
        {
        case 0:
            valor_atual[i] *= 0.75;
            break;

        case 1:
            valor_atual[i] *= 0.80;
            break;

        case 2:
            valor_atual[i] *= 0.82;
            break;

        case 3:
            valor_atual[i] *= 0.85;
            break;

        case 4:
            valor_atual[i] *= 0.88;
            break;

        case 5:
            valor_atual[i] *= 0.90;
            break;

        default:
            break;
        }
    }
    else if (valor_atual[i] <= 45)
    {
    }
    else
    {
        double novo_valor;
        switch (dificuldade[i])
        {
        case 0:
            novo_valor = valor_atual[i] * 0.75;
            valor_atual[i] = novo_valor < 45 ? fmax(novo_valor * 0.75, 45) : valor_atual[i] * 0.875;
            break;
        case 1:
            novo_valor = valor_atual[i] * 0.80;
            valor_atual[i] = novo_valor < 45 ? fmax(novo_valor * 0.80, 45) : valor_atual[i] * 0.90;
            break;
        case 2:
            novo_valor = valor_atual[i] * 0.82;
            valor_atual[i] = novo_valor < 45 ? fmax(novo_valor * 0.82, 45) : valor_atual[i] * 0.91;
            break;
        case 3:
            novo_valor = valor_atual[i] * 0.85;
            valor_atual[i] = novo_valor < 45 ? fmax(novo_valor * 0.85, 45) : valor_atual[i] * 0.925;
            break;
        case 4:
            novo_valor = valor_atual[i] * 0.88;
            valor_atual[i] = novo_valor < 45 ? fmax(novo_valor * 0.88, 45) : valor_atual[i] * 0.94;
            break;
        case 5:
            novo_valor = valor_atual[i] * 0.90;
            valor_atual[i] = novo_valor < 45 ? fmax(novo_valor * 0.90, 45) : valor_atual[i] * 0.95;
            break;
        default:
            break;
        }
    }
}

void armazenar_novo_preco(int dificuldade[], double valor_atual[], int i, int n)
{
    if (i < n)
    {
        calc_preco(dificuldade, valor_atual, i);
        return armazenar_novo_preco(dificuldade, valor_atual, i + 1, n);
    }
}

void apos_tres_anos(int dificuldade[], double valor_atual[], int j, int n)
{
    if (j < 3)
    {
        armazenar_novo_preco(dificuldade, valor_atual, 0, n);
        return apos_tres_anos(dificuldade, valor_atual, j + 1, n);
    }
}

void print_arrays(int dificuldade[], double valor_atual[], int i, int n)
{
    if (i < n)
    {
        printf("Jogo[%d] = R$%.2lf\n", i, valor_atual[i]);
        return print_arrays(dificuldade, valor_atual, i + 1, n);
    }
}

int main()
{
    int n;
    int dificuldade[n];
    double valor_atual[n];

    scanf("%d", &n);
    ler_arrays(dificuldade, valor_atual, 0, n);

    apos_tres_anos(dificuldade, valor_atual, 0, n);

    print_arrays(dificuldade, valor_atual, 0, n);

    return 0;
}

/*

*/