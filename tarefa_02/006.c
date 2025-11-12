#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int livros, alunos;
    scanf("%d %d", &livros, &alunos);

    int media = alunos / livros;

    if (media <= 8)
    {
        printf("A");
    }
    else if (media >= 9 && media <= 12)
    {
        printf("B");
    }
    else if (media >= 13 && media <= 18)
    {
        printf("C");
    }
    else
    {
        printf("D");
    }

    return 0;
}