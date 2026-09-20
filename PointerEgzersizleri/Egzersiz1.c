
#include <stdlib.h>
#include <stdio.h>

int main() {
    int tamsayi = 1;
    float sayi = 2;
    double sayi2 = 3;
    char kelime[100] = "arkadas";

    int *tamsayiptr = &tamsayi;
    float *sayiptr = &sayi;
    double *sayi2ptr = &sayi2;
    char *kelimeptr = kelime;

    printf("Degiskenlerimizin adresleri: %p %p %p %p\n", tamsayiptr, sayiptr, sayi2ptr, kelimeptr);
    printf("Degiskenlerimizin degerleri ise %d %.1f %.1f" ,*tamsayiptr,*sayiptr,*sayi2ptr);
    // Dizinin tuttuğu kelimeyi yazdırma

    while (*kelimeptr != '\0') {
        printf(" %c", *kelimeptr);
        kelimeptr++; // Sonraki dizi elemanına geç
    }
    printf("\n");

    return 0;
}
