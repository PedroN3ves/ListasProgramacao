#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    double raio;
    scanf("%lf", &raio);

    double pi = 3.14159;
    double area;
    area = pi * pow(raio, 2);

    double area_metros = area / 10000;

    printf("Area = %.4lf", area_metros);

    return 0;
}