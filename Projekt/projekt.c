#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *zoznam;
    int num;
    char input;
    printf("Napis znak: ");
    scanf("%c", &input);
    printf("\nNapisane : %c", input);
    if (input == 'v')
    {
        zoznam = fopen("C:\\Users\\Mirec\\Documents\\FIIT\\PrPr cvicenia\\Projekt\\konferencny_zoznam.txt", "r+");
        if (zoznam == NULL)
        {
            printf("\nNeotvoreny subor");
            exit(1);
        }
        printf("\nEnter num: ");
        scanf("%d", &num);
        fprintf(zoznam, "%d", num);
        fclose(zoznam);
        return 0;
    }

    printf("\nZly vstup");
}