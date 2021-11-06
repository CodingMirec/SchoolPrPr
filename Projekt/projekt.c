#include <stdio.h>
#include <stdlib.h>

void functionV(FILE **zoznam);

int rodneIsValid(char *str)
{
    unsigned long long value = strtoull(str, NULL, 10);
    return value >= 1000000000 && value % 11 == 0;
}

void functionV(FILE **zoznam)
{
    char slovo, array;
    int i, num;

    *zoznam = fopen("konferencny_zoznam.txt", "r");
    if (*zoznam == NULL)
    {
        printf("Neotvoreny subor \n");
        exit(1);
    }
    printf("otvorene");

    slovo = getc(*zoznam);
    ungetc(slovo, *zoznam);
    for (i = 1; i != EOF; i++)
    {
        while (fgets(array, 200, *zoznam) != NULL)
        {
            switch (i)
            {
            case '1':
                printf("Prezenter: %s", array);
                break;
            case '2':
                printf("Rodne cislo: %s", array);
                break;
            case '3':
                printf("Kod prezentacnej miestnosti: %s", array);
                break;
            case '4':
                printf("Nazov prispevku: %s", array);
                break;
            case '5':
                printf("Mena autorov: %s", array);
                break;
            case '6':
                printf("Typ prezentovania: %s", array);
                break;
            case '7':
                printf("Cas prezentovania: %s", array);
                break;
            case '8':
                printf("Datum: %s", array);
                break;

            default:
                printf("something went wrong");
                break;
            }
        }
    }

    exit(1);
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

void functionZ(FILE **zoznam)
{
}

void functionK(FILE **zoznam)
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
    switch (input)
    {
    case 'v':
        functionV(&zoznam);
        break;
    case 'o':
        functionO(&zoznam);
        break;
    case 'n':
        functionN(&zoznam);
        break;
    case 's':
        functionS(&zoznam);
        break;
    case 'h':
        functionH(&zoznam);
        break;
    case 'p':
        functionP(&zoznam);
        break;
    case 'z':
        functionZ(&zoznam);
        break;
    case 'k':
        functionK(&zoznam);
        break;
    default:
        printf("Zly vstup");
        break;
    }
}