#include <stdio.h>

int main()
{
    FILE *fin, *fout = stdout;
    char cmd, c;
    scanf("%c", &cmd);
    fin = fopen("znak.txt", "rt");

    if (fin == NULL)
    {
        printf("Neexistuje subor: znak.txt\n");
        return 0;
    }
    if (cmd == 's')
        fout = fopen("novy.txt", "wt");
}