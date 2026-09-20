#include <stdlib.h>
#include <stdio.h>

int main() {
    int elemansayisi;
    printf("Dizi kac elemanli olsun:\n");
    scanf("%d", &elemansayisi);
    int dizi[elemansayisi];
    int *ptr;
    int *tersptr;

    ptr = dizi;

    printf("Elemanlari giriniz:\n");
    for (int i = 0; i < elemansayisi; i++) {
        scanf("%d", ptr);
        ptr++;
    }

    tersptr = &dizi[elemansayisi - 1];  // Başlangıçta tersptr'yi dizinin son elemanına ayarlayın.

    printf("Dizi ters cevrilmeden önce:\n");
    for (int i = 0; i < elemansayisi; i++) {
        printf("%d ", dizi[i]);
    }

    printf("\nDizi ters cevrildikten sonra:\n");
    for (int j = elemansayisi - 1; j >= 0; j--) {
        printf("%d ", *tersptr);
        tersptr--;  // Ters çevirmek için tersptr'yi geriye doğru hareket ettirin.
    }

    return 0;
}
