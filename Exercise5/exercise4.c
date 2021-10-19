#include <stdio.h>

int main()
{
    printf("pondelok");
    FILE *fin = fopen("text.txt", "rt");
    char c;
    int space = 0;
    while ((c = fgetc(fin)) != EOF)
    {
        if (c == ' ')
            space++;
        if (c == 'x' || c == 'X')
            printf("Precital som X\n");
        if (c == 'y' || c == 'Y')
            printf("Precital som Y\n");
        if (c == '#' || c == '$' || c == '&')
            printf("Precital som riadiaci znak\n");
        if (c == '*')
        {
            printf("Koniec\n");
            printf("Pocet precitanych medzier: %d\n", space);
            return 0;
        }
    }
    return 0;
}