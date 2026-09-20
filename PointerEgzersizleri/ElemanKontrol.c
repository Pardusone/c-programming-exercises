#include <stdlib.h>
#include <stdio.h>

int main() {
    int dizi[100];
    int *ptr;
    int eleman;
    int i;
    ptr = dizi;
    int *finderptr;
    int aranan;
    int elemanmevcut = 0;
    int sayac = 1; // Başlangıçta sayacı 1 olarak ayarlıyoruz.

    printf("Dizi kac elemanli olsun\n");
    scanf("%d", &eleman);
    printf("Lutfen elemanlari giriniz:\n");
    for (i = 0; i < eleman; i++) {
        scanf("%d", ptr);
        ptr++;
    }

    printf("Dizinin icinde aramak istediginiz elemani giriniz: ");
    scanf("%d", &aranan);
    finderptr = dizi;
    for (i = 0; i < eleman; i++) {
        if (*finderptr == aranan) {
            elemanmevcut = 1;
            break; // Eleman bulunduğunda döngüden çık.
        }
        finderptr++;
    }
    finderptr = dizi;
    if (elemanmevcut) {
        printf("Eleman dizide mevcuttur.\n");
        for (i = 0; i < eleman; i++) {
            if (*finderptr == aranan) {
                printf("Elemanin sirasi %d'dir\n", sayac);
            }
            finderptr++;
            sayac++;
        }
    } else {
        printf("Eleman dizide mevcut degildir.\n");
    }

    return 0;
}
