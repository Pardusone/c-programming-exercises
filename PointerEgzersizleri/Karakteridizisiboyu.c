#include <stdlib.h>
#include <stdio.h>

int main() {
    char dizi[100];
    char *ptr;

    printf("Lutfen cumleyi giriniz:\n");
    gets(dizi);

    ptr = dizi;  // ptr, dizi'nin başlangıç adresini göstersin

    int karakterSayisi = 0;

    while (*ptr != '\0') {  // '\0' ile biten karakter dizisinin sonuna kadar ilerle
        karakterSayisi++;
        ptr++;  // ptr'yi bir sonraki karaktere taşı
    }

    printf("Dizimiz %s %d kadar karakterden olusmaktadir\n", dizi, karakterSayisi);

    return 0;
}
