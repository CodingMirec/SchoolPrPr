#include <stdio.h>

int main()
{
    FILE *fout = fopen("nasobky.txt", "wt");
    if (fout == NULL)
    {
        printf("Neexistuje subor \n");
        return 0;
    }
    double x;
    int i;
    scanf("%lf", &x);
    for (i = 1; i <= 10; i++)
        fprintf(fout, "%2d * %.21f = %.21f\n", i, x, x * i);

    return 0;
}