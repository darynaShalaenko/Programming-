#include <iostream>
#include <string.h>
#include <ctype.h>
#include "files_work.h"


int write_doubles_to_file(FILE* fp) {

    double x;
    int cnt = 0;
    char c;

    while (1) {

        printf("input another real?y/n");
        c = (char)getchar();
        c = tolower(c);

        while (c != 'y' && c != 'n') {
            printf("Yes Or No?y/n");
            c = (char)getchar();
            c = tolower(c);

        }

        if (c == 'n')break;
        printf("x=");
        scanf_s("%lf", &x);
        fwrite(&x, sizeof(x), 1, fp);

    }

    return cnt;

}

int read_doubles_from_file(FILE* fp) {

    double x;
    int cnt = 0;

    do {

        int r = fread(&x, sizeof(x), 1, fp);
        if (r != 1) break;
        printf("%f", x);
        cnt++;

    } while (1);

    return cnt;

}




int transfer_doubles_less(FILE* F, FILE* G, double a) {

    double x;

    do {

        int r = fread(&x, sizeof(x), 1, F);
        if (r != 1) break;

        if (x < a) {

            fwrite(&x, sizeof(x), 1, G);

        }

    } while (1);

    return 0;

}




int exclude_less(FILE* F, double a) {

    FILE* ftmp = fopen("temp_file.dat", "wb");

    double x;




    do {

        int r = fread(&x, sizeof(x), 1, F);
        if (r != 1) break;

        if (x >= a) {

            fwrite(&x, sizeof(x), 1, ftmp);

        }

    } while (1);
  

    fclose(ftmp);

    return 0;

}

int main() {

    char fname[] = "F.dat";
    char gname[] = "G.dat";
    FILE* F = fopen(fname, "wb");

    if (F == NULL) {
        printf("error");
        return -1;

    }

    write_doubles_to_file(F);
    fclose(F);
    F = fopen(fname, "rb");


    if (F == NULL) {

        printf("error2");

        return -2;

    }

    FILE* G = fopen(gname, "wb");

    if (G == NULL) {

        printf("error3");

        return -3;

    }


    double a;
    printf("a=");
    scanf_s("%lf", &a);
    transfer_doubles_less(F, G, a);
    fclose(G);
    fclose(F);
    F = fopen(fname, "rb");
    printf("F=");
    read_doubles_from_file(F);
    printf("\n");
    printf("G=");
    G = fopen(gname, "rb");
    read_doubles_from_file(G);
    printf("\n");
    fclose(F);
    fclose(G);
    F = fopen(fname, "rb");
    exclude_less(F, a);
    fclose(F);
    rename("temp_file.dat", fname);
    F = fopen(fname, "rb");
    read_doubles_from_file(F);
    printf("\n");
    fclose(F);

    return 0;

}