#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int mdc(int a, int d)
{
    int q, r, res;

    q = a / d;
    r = a % d;
    a = (d * q + r);

    if (r == 0)
    {
        res = d;
    }
    else
    {
        a = d;
        d = r;
        res = mdc(a, d);
    }

    return res;
}

int main()
{
    int n1, n2, res;
    scanf("%d%d", &n1, &n2);

    res = mdc(n1, n2);
    printf("%d", res);

    return 0;
}