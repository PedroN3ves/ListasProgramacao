#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int calcular_desconto(double preco_orignal, double preco_desconto)
{
    if (preco_orignal * 0.8 >= preco_desconto)
    {
        return 1;
    }
    return 0;
}

void ler_array(double array1[], double array2[], int i)
{
    if (i < 5)
    {
        scanf("%lf %lf", &array1[i], &array2[i]);
        return ler_array(array1, array2, i + 1);
    }
}

void contar_descontos(double array1[], double array2[], int i, int res)
{
    if (i < 5)
    {
        res += calcular_desconto(array1[i], array2[i]);
        return contar_descontos(array1, array2, i + 1, res);
    }
    printf("%d", res);
}

int main()
{
    double preco_orignal[5], preco_desconto[5];

    ler_array(preco_orignal, preco_desconto, 0);
    contar_descontos(preco_orignal, preco_desconto, 0, 0);

    return 0;
}

/*
    receber 10 valores reais, 5 preços originais de um produto e 5 preços com desconto
    calcular se o desconto é de 20% ou não
    contar quantos produtos tiveram um desconto de 20% ou mais
*/