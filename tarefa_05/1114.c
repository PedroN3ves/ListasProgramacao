#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void eh_impar(int n1, int a[], int i, int n)
{
    if (i < n)
    {
        if (n1 % 2 == 0)
        {
            return eh_impar(n1 + 1, a, i, n);
        }
        a[i] = n1;
        return eh_impar(n1 + 1, a, i + 1, n);
    }
}

void multiplo_tres(int n1, int a[], int i, int n)
{
    if (i < n)
    {
        a[i] = n1 * 3;
        return multiplo_tres(n1 + 1, a, i + 1, n);
    }
}

void potencia_dois(double n1, int a[], int i, int n)
{
    if (i < n)
    {
        a[i] = pow(2, n1);
        return potencia_dois(n1 + 1, a, i + 1, n);
    }
}

void print_array(int i, int n, double array[])
{
    if (i < n)
    {
        printf("%.2lf ", array[i]);

        print_array(i + 1, n, array);
    }
}

void armazenar_serie(double S[], int impares[], int pot_dois[], int mult_tres[], int i, int n)
{
    if (i < n)
    {
        if (i % 2 == 0)
        {
            S[i] = ((double)impares[i / 2] / (double)pot_dois[i]);
        }
        else
        {
            S[i] = ((double)pot_dois[i] / (double)mult_tres[i / 2]);
        }
        return armazenar_serie(S, impares, pot_dois, mult_tres, i + 1, n);
    }
}

void calculo_serie(double S[], double somatorio_S, int i, int n)
{
    if (i < n)
    {
        somatorio_S += S[i];
        return calculo_serie(S, somatorio_S, i + 1, n);
    }
    printf("S: %.2lf", somatorio_S);
}

int main()
{
    int n;
    scanf("%d", &n);

    double S[n], somatorio_S;
    int impares[n], mult_tres[n], pot_dois[n];

    eh_impar(0, impares, 0, n);
    multiplo_tres(1, mult_tres, 0, n);
    potencia_dois(0, pot_dois, 0, n);

    armazenar_serie(S, impares, pot_dois, mult_tres, 0, n);
    calculo_serie(S, somatorio_S, 0, n);

    return 0;
}

/*
    S = (impar / pot_2) + (pot_2 / mult_3) + (impar / pot_2) + (pot_2 / mult_3) + ...
*/