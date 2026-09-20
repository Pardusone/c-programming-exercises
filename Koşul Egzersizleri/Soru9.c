#include <stdio.h>
#include <stdlib.h>
int main(){
int kod;
float fiyat,sonfiyat;
printf("Fiyatini ogrenmek istediginiz urun cesidinin kodunu giriniz \n Kitap icin 0 \n Temel gida icin 1 \n Luks gida icin 2'yi tuslayiniz \n:");
scanf("%d",&kod);
printf("Urunun fiyatini giriniz \n:");
scanf("%f",&fiyat);
switch(kod){
    case 0 :  printf("Urunun son fiyati: %.3f",fiyat*104/100);
    break;
     case 1 : printf("Urunun son fiyatı: %.3f",fiyat*105.6/100);
    break;
     case 2 : printf("Urunun son fiyatı: %.3f",fiyat*119.6/100);
    break;
}
return 0;
}