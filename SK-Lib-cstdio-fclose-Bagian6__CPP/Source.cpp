#pragma warning(disable:4996)

#include <cstdio>
#include <stdlib.h>
#include <conio.h>

/*
    Source by GeeksForGeeks
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main() {
    FILE* fp;
    char feedback[100];
    char c;

    fp = fopen("file.txt", "w");
    c = fgetc(fp);

    if (ferror(fp)) {
        printf("Error in reading from file : file.txt\n");
    }

    clearerr(fp);

    if (ferror(fp)) {
        printf("Error in reading from file : file.txt\n");
    }

    fclose(fp);

    _getch();
    return 0;
}