#include <stdio.h>
#include <ctype.h>
#include <math.h>

int main()
{
    // printf("\t\\*/ Toto je backslash: \\*/ \n \n");

    // int a, b, c, p;
    // scanf("%g", a, b, c);
    // p = (a + b + c) / 3;
    // printf(p);

    // double cena;
    // scanf("%lf", &cena);
    // printf("Cena bez dane: %g\n", cena);
    // printf("Cena s danou 20%%: %.1lf\n", cena * 1.2);

    // double v, m;
    // scanf("%lf %lf", &v, &m);
    // v /= 100.0;
    // printf("BMI: %.3lf\n", m / (v * v));

    // char a, b;
    // scanf("%c %c", &a, &b);
    // a -= 'a';
    // a += 'A';
    // b -= 'a';
    // b += 'A';

    // printf("%c %d\n", a, a);
    // printf("%c %d\n", b, b);

    // printf("Napis dve velke pismena: ");
    // char a, b;
    // scanf("%c %c", &a, &b);
    // printf("%c %c\n \n", tolower(b), tolower(a));

    // printf("Zadajte 3 hodnoty kvadra: ");
    // double x, y, z;
    // scanf("%lf %lf %lf", &x, &y, &z);
    // printf("objem: %.3lf\n \n", x * y * z);

    int a, b, c, d, e;
    printf("Zadaj prvych 5 cisiel: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    printf("%d\n", e / --a * b++ / c++);
    printf("Zadaj druhych 5 cisiel: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    printf("%d\n", a %= b = d = 1 + e / 2);

    printf("Napis cele cislo: ");
    double celeCislo;
    scanf("%lf", &celeCislo);
    printf("%d \n", (int)celeCislo);
    printf("%.0lf \n \n", celeCislo);

    return 0;
}