#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n1, n2, n3;
    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 < n2 && n1 < n3)
    {
        printf("%d", n1);
    }
    else if (n2 < n1 && n2 < n3)
    {
        printf("%d", n2);
    }
    else if (n3 < n2 && n3 < n1)
    {
        printf("%d", n3);
    }
    else if (n1 == n2 && n1 < n3)
    {
        printf("%d", n1);
    }
    else if (n1 == n3 && n1 < n2)
    {
        printf("%d", n1);
    }
    else if (n2 == n3 && n2 < n1)
    {
        printf("%d", n2);
    }
    else
    {
        printf("%d", n1);
    }

    return 0;
}