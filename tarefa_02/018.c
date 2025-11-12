#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    double a, b, c;
    scanf("%lf%lf%lf", &a, &b, &c);

    double delta, quadratica1, quadratica2;
    delta = pow(b, 2) - (4 * a * c);
    quadratica1 = (-b + sqrt(delta)) / (2 * a);
    quadratica2 = (-b - sqrt(delta)) / (2 * a);

    if (a == 0)
    {
        printf("NEESG");
    }
    else if (delta >= 0)
    {
        printf("%.2lf\n%.2lf", quadratica1, quadratica2);
    }
    else
    {
        printf("NRR");
    }

    return 0;
}