#include <stdlib.h>
#include <stdio.h>
int faktoriyelhesap(int sayim){
    int i ;
    int sonuc = 1 ;
    for(i=1;i<=sayim;i++){
        sonuc = sonuc*i;
    }
    return sonuc ;
}
    int main(){
        int sayi2;
printf("Lutfen faktoriyelini almak istediginiz sayiyi giriniz:\n");
scanf("%d",&sayi2);
printf("Sayinin faktoriyeli:%d",faktoriyelhesap(sayi2));
    }
