#include <stdlib.h>
#include <stdio.h>

int faktoriyel(int *sayi)
{
    int sonuc = 1 ;
    for(int i = *sayi;i>1;i--){
        sonuc *=(*sayi); 
        (*sayi)-- ;
    }
    return sonuc ;
}

int main(){

int n,orijinalsayi ;
printf("Lutfen faktoriyelini almak istediginiz sayiyi giriniz:\n");
scanf("%d",&n);
orijinalsayi=n;
printf("%d!=%d",orijinalsayi,faktoriyel(&n));

}