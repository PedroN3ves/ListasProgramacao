#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int anos, dias, horas, minutos, segundos;
    scanf("%d", &anos);

    dias = anos * 365;
    horas = dias * 24;
    minutos = horas * 60;
    segundos = minutos * 60;

    printf("%d", segundos);

    return 0;
}