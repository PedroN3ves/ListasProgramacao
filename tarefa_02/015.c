#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    double vel_via, vel_veiculo;
    scanf("%lf %lf", &vel_via, &vel_veiculo);

    if (vel_veiculo > vel_via && vel_veiculo <= vel_via * 1.2)
    {
        printf("%.2lf\n%d", 85.13, 4);
    }
    else if (vel_veiculo > vel_via * 1.2 && vel_veiculo <= vel_via * 1.5)
    {
        printf("%.2lf\n%d", 127.69, 5);
    }
    else if (vel_veiculo > vel_via * 1.5)
    {
        printf("%.2lf\n%d", 574.62, 7);
    }
    else
    {
        printf("%.2lf\n%d", 0.00, 0);
    }

    return 0;
}