#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    double F;
    scanf("%lf", &F);

    double C;
    C = (F - 32) / 1.8;

    printf("%.2lf", C);

    return 0;
}