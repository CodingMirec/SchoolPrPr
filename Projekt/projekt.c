#include <stdio.h>
#include <stdlib.h>

void functionV(FILE **zoznam);

void functionV(FILE **zoznam)
{
    int num;
    *zoznam = fopen("konferencny_zoznam.txt", "r+");
    if (*zoznam == NULL)
    {
        printf("Neotvoreny subor \n");
        exit(1);
    }
    printf("Enter num: \n");
    scanf("%d", &num);
    fprintf(*zoznam, "%d", num);
    fclose(*zoznam);
    return NULL;
}

void functionO(FILE **zoznam)
{
}

void functionN(FILE **zoznam)
{
}

void functionS(FILE **zoznam)
{
}

void functionH(FILE **zoznam)
{
}

void functionP(FILE **zoznam)
{
}

void main()
{
    FILE *zoznam;
    char input;
    char result;
    printf("Napis znak: \n");
    scanf("%c", &input);

    printf("Napisane : %c \n", input);
    if (input == 'v')
    {
        functionV(&zoznam);
        return NULL;
    }

    printf("Zly vstup \n");
}