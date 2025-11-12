#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    double conta;
    scanf("%lf", &conta);

    double conta_total;
    conta_total = conta * 1.1;

    printf("%.2lf", conta_total);

    return 0;
}