#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    int n;
    int toplam = 0;
    int sayac;
    printf("sayi giriniz: \n");
    scanf("%d",&n);
    while(i<n){
        i++ ;
        sayac = i;
        toplam = toplam + sayac ;

    }
    printf("%d",toplam);
}
