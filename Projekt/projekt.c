#include <stdio.h>
#include <stdlib.h>

int rodneIsValid(char *str)
{
    unsigned long long value = strtoull(str, NULL, 10);
    return value >= 1000000000 && value % 11 == 0;
}

void functionV(FILE *zoznam)
{
    char buf[200];
    char data;
    int riadky, zaznamy, i;
    char **poleVstupov;

    zoznam = fopen("konferencny_zoznam.txt", "r");
    if (zoznam == NULL)
    {
        printf("Neotvoreny subor \n");
        exit(1);
    }
    for (i = 0; i != 9; i++)
        while (fgets(buf, 200, zoznam) != NULL)
        {
            if (i > 8)
                i = 0;
            i++;
            switch (i)
            {
            case 1:
                printf("Prezenter: %s", buf);
                break;
            case 2:
                printf("Rodne cislo: %s", buf);
                break;
            case 3:
                printf("Kod prezentacnej miestnosti: %s", buf);
                break;
            case 4:
                printf("Nazov prispevku: %s", buf);
                break;
            case 5:
                printf("Mena autorov: %s", buf);
                break;
            case 6:
                printf("Typ prezentovania: %s", buf);
                break;
            case 7:
                printf("Cas prezentovania: %s", buf);
                break;
            case 8:
                printf("Datum: %s", buf);
                break;
            default:
                printf(" \n");
                break;
            }
        }
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
    FILE *zoznam = NULL;
    char input;
    char **poleZnakov = NULL;
    char buf[50];

    while (1)
    {

        printf("Napis znak: \n");
        scanf(" %c", &input);
        printf("Napisane : %c \n", input);

        switch (input)
        {
        case 'v':
            functionV(&*zoznam);
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
        case 'e':
            printf("Koniec. \n\n");
            exit(1);
        default:
            printf("Zly vstup. \n\n");
            break;
        }
    }
}