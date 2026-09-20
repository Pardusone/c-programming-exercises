#include <stdlib.h>
#include <stdio.h>

void cevir(int saniye) {
    int saat;
    int dakika;
    int kalansaniye;
    
    saat = saniye / 3600;
    dakika = (saniye % 3600) / 60;
    kalansaniye = (saniye % 3600) % 60;
    
    printf("%d saat:%d dakika :%d saniye\n", saat, dakika, kalansaniye);
}

int main() {
    int saniye;
    printf("Lutfen cevirmek istediginiz saniye degerini giriniz:\n");
    scanf("%d", &saniye);
    cevir(saniye);
    
    return 0;
}
