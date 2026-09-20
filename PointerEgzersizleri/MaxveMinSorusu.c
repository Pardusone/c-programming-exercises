#include <stdio.h>
#include <stdlib.h>

void maxmin(int *dizi, int eleman_sayisi) {
    int en_buyuk = *dizi; // En büyük sayıyı başlangıçta ilk eleman olarak kabul edelim
    int en_kucuk = *dizi;

    for (int i = 1; i < eleman_sayisi; i++) {
        if (*(dizi + i) > en_buyuk) {
            en_buyuk = *(dizi + i);
        }
        if (*(dizi + i) < en_kucuk) {
            en_kucuk = *(dizi + i);
        }
    }

    printf("En buyuk sayi: %d\n", en_buyuk);
    printf("En kucuk sayi: %d\n", en_kucuk);
}

int main() {
    int eleman_sayisi;

    printf("Dizi kac elemanli olsun: ");
    scanf("%d", &eleman_sayisi);
    
    int *dizi = (int *)malloc(eleman_sayisi * sizeof(int));
    if (dizi == NULL) {
        printf("Bellek ayrilamadi.\n");
        return 1;
    }

    printf("Lutfen elemanlari giriniz:\n");
    for (int i = 0; i < eleman_sayisi; i++) {
        scanf("%d", dizi + i);
    }

    maxmin(dizi, eleman_sayisi);

    free(dizi);

    return 0;
}
