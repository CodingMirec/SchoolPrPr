#include <stdio.h>
#include <math.h>

int zisti_prvocislo(int cislo)
{
    int i;
    for (i = 2; i * i <= cislo; i++)
        if (cislo % i == 0)
            return -1;
    return cislo > 1;
}

int main()
{
    int a, b, i;

    scanf("%d %d", &a, &b);
    for (i = a; i <= b; i++)
        if (zisti_prvocislo(i) > 0)
            printf("%d\n", i);
}