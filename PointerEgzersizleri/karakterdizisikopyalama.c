#include <stdlib.h>
#include <stdio.h>
#define MAX 15

int main() {
    char dizi[MAX] = {'k', 'l', 'b', 'd', 'q', 'i', 's', 't', 'e', 'f', 'o', 'r', 'c', 'h', 'x'};
    char *ptr1;
    char *ptr2;

    for (ptr1 = dizi; *ptr1 != '\0'; ptr1++) {
        ptr2 = ptr1;  // ptr2'yi ptr1 ile aynı konuma ayarla
        
        printf("%c", *ptr2);  // ptr2 ile ptr1 aynıdır, dolayısıyla tek bir karakter yazdırır
    }

    return 0;
}
