#include <stdio.h>
#include <stdlib.h>

void yerdegistir(int *sayi1 , int *sayi2){

int gecici ;
gecici = *sayi1 ;
*sayi1 = *sayi2 ;
*sayi2 = gecici ;
printf("Sayilarin yer degistirdikten sonraki hali 1. sayi %d 2. sayi %d'dir",*sayi1,*sayi2);


}




int main(){

int sayi1,sayi2;

printf("Lutfen degerlerini degistirmek istediginiz sayilari giriniz \n");
scanf("%d%d",&sayi1,&sayi2);

printf("Sayilarin degistirilmeden onceki hali 1. sayi %d 2. sayi %d'dir \n",sayi1,sayi2);
yerdegistir(&sayi1,&sayi2);

}