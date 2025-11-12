#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    double nota1, nota2;
    scanf("%lf %lf", &nota1, &nota2);

    double media;
    double peso1 = 3.5, peso2 = 7.5;
    media = ((nota1 * peso1) + (nota2 * peso2)) / (peso1 + peso2);

    printf("MEDIA = %.5lf", media);

    return 0;
}