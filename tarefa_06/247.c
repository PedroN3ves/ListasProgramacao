#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void reverter(char s[], int ini, int fim)
{
    if (ini >= fim)
    {
        return;
    }

    char temp = s[ini];
    s[ini] = s[fim];
    s[fim] = temp;

    reverter(s, ini + 1, fim - 1);
}

void mostrar(char s[], int i)
{
    if (s[i] != '\0')
    {
        printf("%c", s[i]);
        mostrar(s, i + 1);
    }
}

int main()
{
    char str[255];
    scanf("%s", str);
    int len = strlen(str);

    reverter(str, 0, len - 1);
    mostrar(str, 0);
    printf("\n");

    return 0;
}

#include <stdio.h>