#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int l1, l2, l3;
    scanf("%d %d %d", &l1, &l2, &l3);

    if (l1 == l2 && l1 == l3)
    {
        printf("equilatero");
    }
    else if (l1 != l2)
    {
        if (l1 == l3)
        {
            printf("isosceles");
        }
        else if (l2 == l3)
        {
            printf("isosceles");
        }
        else
        {
            printf("escaleno");
        }
    }
    else
    {
        if (l1 == l2)
        {
            printf("isosceles");
        }
        else
        {
            printf("escaleno");
        }
    }

    return 0;
}