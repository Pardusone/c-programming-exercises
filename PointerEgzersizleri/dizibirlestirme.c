#include <stdlib.h>
#include <stdio.h>

int main() {
    int eleman_sayi1, eleman_sayi2;
    printf("ilk dizi kac elemanli olsun\n");
    scanf("%d", &eleman_sayi1);
    printf("ikinci dizim kac elemanli olsun:\n");
    scanf("%d", &eleman_sayi2);
    
    int dizi1[eleman_sayi1];
    int dizi2[eleman_sayi2];

    int *ptr1 = dizi1;
    int *ptr2 = dizi2;

    printf("Lutfen dizi1'e ait elemanlari giriniz:\n");
    for (int i = 0; i < eleman_sayi1; i++) {
        scanf("%d", ptr1);
        ptr1++;
    }

    printf("Lutfen dizi2'e ait elemanlari giriniz:\n");
    for (int i = 0; i < eleman_sayi2; i++) {
        scanf("%d", ptr2);
        ptr2++;
    }

    printf("ilk dizi:\n");
    ptr1 = dizi1;  // İşaretçiyi dizinin başına taşı
    for (int i = 0; i < eleman_sayi1; i++) {
        printf("%d ", *ptr1);
        ptr1++;
    }

    printf("\nikinci dizi:\n");
    ptr2 = dizi2;  // İşaretçiyi dizinin başına taşı
    for (int i = 0; i < eleman_sayi2; i++) {
        printf("%d ", *ptr2);
        ptr2++;
    }

    ptr1 = dizi1;
    ptr2 = dizi2;

    printf("\nDizilerin birlestirilmis hali ise :\n");
    for(int i = 0; i < eleman_sayi1 + eleman_sayi2; i++){
        if (i < eleman_sayi1) {
            printf("%3d", *ptr1);
            ptr1++;
        } else {
            printf("%3d", *ptr2);
            ptr2++;
        }
    }

    return 0;
}
