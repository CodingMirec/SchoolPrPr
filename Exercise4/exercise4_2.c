#include <stdio.h>
#include <math.h>

void nasobok(double x, int n)
{
    int i;
    for (i = 1; i <= n; i++)
    {
        printf("%.2lf * %d = %.2lf\n", x, i, x + (i * x));
    }
}

int main()
{
    double x;
    int n;

    scanf("%lf %d", &x, &n);
    nasobok(x, n);
}