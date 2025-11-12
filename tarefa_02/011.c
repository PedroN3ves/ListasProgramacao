#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    double sal, valor_comprometido;
    scanf("%lf %lf", &sal, &valor_comprometido);

    double pct_limite, limite_real;
    pct_limite = sal * 0.3;
    limite_real = pct_limite - valor_comprometido;

    if (valor_comprometido < pct_limite)
    {
        printf("%.2lf", limite_real);
    }
    else
    {
        printf("%2.lf", 0);
    }

    return 0;
}