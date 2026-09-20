#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ekle(int dizi[], int sira, int eleman) {
    dizi[sira - 1] = eleman;
}

int main() {
    int elemansayisi;
    int sira;
    int eleman;
    int i;
    int j;
    printf("Dizi kac elemanli olsun: ");
    scanf("%d", &elemansayisi);
    int dizi[elemansayisi];
    srand(time(NULL));
    for (j = 0; j < elemansayisi; j++) {
        dizi[j] = rand();
    }
    printf("Kacinci siradaki elemani degistirmek istiyorsunuz: ");
    scanf("%d", &sira);
    printf("Eklemek istediginiz sayi kactir: ");
    scanf("%d", &eleman);
    ekle(dizi, sira, eleman);
    for (i = 0; i < elemansayisi; i++) {
        printf("%d\n", dizi[i]);
    }

    return 0;
}
