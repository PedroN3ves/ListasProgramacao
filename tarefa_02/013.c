#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    double sal;
    scanf("%lf", &sal);

    double aumento;

    if (sal > 500)
    {
        aumento = sal + (sal * 0.10);
        printf("%.2lf", aumento);
    }
    else if (sal > 300)
    {
        aumento = sal + (sal * 0.07);
        printf("%.2lf", aumento);
    }
    else
    {
        aumento = sal + (sal * 0.05);
        printf("%.2lf", aumento);
    }

    return 0;
}