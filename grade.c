#include <stdio.h>
#include <stdlib.h>

int main () {
    char nama [100];

    printf("Masukkan nama anda: ");
    scanf("%[^\n]%*c", nama);

    printf("\nHalo selamat datang di program konversi nilai ini %s\n", nama);

    double nilai;

    printf("Masukkan nilai yang akan dikonversi: ");
    scanf("%lf", &nilai);

    if (80 <= nilai && nilai <= 100) {
        printf("\n--------------------------------------\n");
        printf("Nilainya dalam skala huruf adalah: A\n");
        printf("--------------------------------------\n");
    }

    if (72 <= nilai && nilai < 80) {
        printf("\n--------------------------------------\n");
        printf("Nilainya dalam skala huruf adalah: AB\n");
        printf("--------------------------------------\n");
    }

    if (65 <= nilai && nilai < 72) {
        printf("\n--------------------------------------\n");
        printf("Nilainya dalam skala huruf adalah: B\n");
        printf("--------------------------------------\n");
    }

    if (57 <= nilai && nilai < 65) {
        printf("\n--------------------------------------\n");
        printf("Nilainya dalam skala huruf adalah: BC\n");
        printf("--------------------------------------\n");
    }

    if (50 <= nilai && nilai < 57) {
        printf("\n--------------------------------------\n");
        printf("Nilainya dalam skala huruf adalah: C\n");
        printf("--------------------------------------\n");
    }

    if (35 <= nilai && nilai < 50) {
        printf("\n--------------------------------------\n");
        printf("Nilainya dalam skala huruf adalah: D\n");
        printf("--------------------------------------\n");
    }

    if (0 <= nilai && nilai < 35) {
        printf("\n--------------------------------------\n");
        printf("Nilainya dalam skala huruf adalah: E\n");
        printf("--------------------------------------\n");
    }

    if (nilai > 100) {
        printf("\n--------------------------------------\n");
        printf("Invalid input.\n");
        printf("--------------------------------------\n");
    }

    if (nilai < 0) {
        printf("\n--------------------------------------\n");
        printf("Invalid input.\n");
        printf("--------------------------------------\n");
    }

    return 0;
}