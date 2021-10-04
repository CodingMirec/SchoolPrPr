#include <stdio.h>
int main()
{
    // 1.1 cvicenie - vypis Hello World
    printf("Hello, World! \n \n \n");

    // 1.3 cvicenie - vypise sucet a sucin cisiel
    int a, b;
    printf("Napis dve cisla: ");
    scanf("%d %d", &a, &b);
    printf("Sucet nacitanych cisiel je: %d \n", a + b);
    printf("Sucin nacitanych cisiel je: %d \n  \n", a * b);

    // 1.4 cvicenie - vypise druhu mocninu cisla
    int cislo;
    printf("Napis dve cislo, ktore chces umocnit: ");
    scanf("%d", &cislo);
    printf("%d \n \n", cislo * cislo);

    // 1.5 cvicenie - vypise obvod kruhu
    int polomer;
    printf("Napis polomer kruhu: ");
    scanf("%d", &polomer);
    printf("Obvod kruhu s polomerom %d je: %lf", polomer, 2 * polomer * 3.14);

    return 0;
}