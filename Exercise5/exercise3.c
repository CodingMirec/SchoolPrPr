#include <stdio.h>

int main()
{
    char buf[100];
    int i, c;
    FILE *fin = fopen("vstup.txt", "rt");
    FILE *fout = fopen("cisla.txt", "at");
    while (fgets(buf, 100, fin) != NULL)
    {
        for (i = 0, c = 0; buf[i]; i++)
            if (buf[i] >= 'a' && buf[i] <= 'z')
                c++;
        fputs(buf, fout);
        fprintf(fout, "%d\n", c);
    }
    return 0;
}