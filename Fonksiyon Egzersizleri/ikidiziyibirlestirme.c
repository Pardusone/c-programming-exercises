#include <stdio.h>
#include <stdlib.h>

int* dizileriBirlestir(int dizi1[], int dizi2[], int eleman1, int eleman2) {
    int i, j;
    int* dizi3 = (int*)malloc((eleman1 + eleman2) * sizeof(int));
    if (dizi3 == NULL) {
        printf("Bellek hatasi! Dizi olusturulamadi.");
        return NULL;
    }

    for (i = 0; i < eleman1; i++) {
        dizi3[i] = dizi1[i];
    }
    for (j = 0; j < eleman2; j++) {
        dizi3[eleman1 + j] = dizi2[j];
    }

    return dizi3;
}

int main() {
    int A, B;
    int eleman1, eleman2;
    int i, j, k;

    printf("Ilk dizinin eleman sayisi kac olsun: ");
    scanf("%d", &A);

    printf("Ikinci dizinin eleman sayisi kac olsun: ");
    scanf("%d", &B);

    int dizi1[A];
    int dizi2[B];

    printf("Ilk dizinin elemanlarini giriniz:\n");
    for (i = 0; i < A; i++) {
        scanf("%d", &eleman1);
        dizi1[i] = eleman1;
    }

    printf("Ikinci dizinin elemanlarini giriniz:\n");
    for (j = 0; j < B; j++) {
        scanf("%d", &eleman2);
        dizi2[j] = eleman2;
    }

    int* birlesikdizi = dizileriBirlestir(dizi1, dizi2, A, B);
    if (birlesikdizi != NULL) {
        printf("Birlesik Dizi: ");
        for (k = 0; k < A + B; k++) {
            printf("%d ", birlesikdizi[k]);
        }
        printf("\n");

        free(birlesikdizi);
    }

    return 0;
}