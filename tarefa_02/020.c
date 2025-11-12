#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    double litros;
    char combustivel;
    scanf("%lf %c", &litros, &combustivel);

    double preco;

    switch (combustivel)
    {
    case 'A':
        if (litros <= 20)
        {
            preco = (1.9 * litros) * 0.97;
            printf("R$ %.2lf", preco);
        }
        else
        {
            preco = (1.9 * litros) * 0.95;
            printf("R$ %.2lf", preco);
        }
        break;

    case 'G':
        if (litros <= 20)
        {
            preco = (2.5 * litros) * 0.96;
            printf("R$ %.2lf", preco);
        }
        else
        {
            preco = (2.5 * litros) * 0.94;
            printf("R$ %.2lf", preco);
        }
        break;

    case 'D':
        if (litros <= 25)
        {
            preco = (1.66 * litros);
            printf("R$ %.2lf", preco);
        }
        else
        {
            preco = (1.66 * litros) * 0.96;
            printf("R$ %.2lf", preco);
        }
        break;
    }

    return 0;
}