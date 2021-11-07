#include <stdio.h>
#include <stdlib.h>

int menoIsValid(char *buf)
{
    if (strlen(buf) >= 50)
        return 0;
}

int rodneIsValid(char *buf)
{
    unsigned long long value = strtoull(buf, NULL, 10);
    return value >= 1000000000 && value % 11 == 0;
}

int kodIsValid(char *buf)
{
    if (strlen(buf) == 4 && (buf[0] >= 'A' && buf[0] <= 'Z') && ((buf[1] <= '9') && (buf[1] >= '0')) && ((buf[2] <= '9') && (buf[2] >= '0')) == 1)
        return 1;
}

int nazovPrispevkuIsValid(char *buf)
{
    if (strlen(buf) <= 150)
        return 1;
}

int autoryIsValid(char *buf)
{
    if (strlen(buf) >= 200)
        return 0;
}

int typIsValid(char *buf)
{
    if ((buf[0] == 'P' || buf[0] == 'U') && (buf[1] == 'P' || buf[1] == 'U') == 1)
        return 1;
}

int casIsValid(char *buf)
{
    if (strlen(buf) == 4 && ((buf[0] + buf[1]) >= '0' && (buf[0] + buf[1]) <= '24') && (((buf[3] + buf[4]) >= '0') && ((buf[3] + buf[4]) <= '60')) && ((buf[2] <= '9') && (buf[2] >= '0')) == 1)
        return 1;
}

int datumIsValid(char *buf)
{
    if (strlen(buf) >= 50)
        return 0;
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
                if (menoIsValid(&*buf) != 0)
                {
                    printf("Prezenter: %s", buf);
                    break;
                }
                printf("Nekorektne zadany vstup: Prezenter\n");
                break;
            case 2:
                if (rodneIsValid(&*buf) == 1)
                {
                    printf("Rodne cislo: %s", buf);
                    break;
                }
                printf("Nekorektne zadany vstup: Rodne cislo\n");
                break;
            case 3:
                if (kodIsValid(&*buf) == 1)
                {
                    printf("Kod prezentacnej miestnosti: %s", buf);
                    break;
                }
                printf("Nekorektne zadany vstup: Kod prezentacnej miestnosti\n");
                break;
            case 4:
                printf("Nazov prispevku: %s", buf);
                break;
            case 5:
                printf("Mena autorov: %s", buf);
                break;
            case 6:
                if (typIsValid(&*buf) == 1)
                {
                    printf("Typ prezentovania: %s", buf);
                    break;
                }
                printf("Nekorektne zadany vstup: Typ prezentovania\n");
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

    printf("-----------------------------------------------");

    while (1)
    {

        printf("\nNapis znak: \n");
        scanf(" %c", &input);

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
            printf("Koniec programu\n\n");
            exit(1);
        default:
            printf("Zly vstup\n\n");
            break;
        }
    }
}