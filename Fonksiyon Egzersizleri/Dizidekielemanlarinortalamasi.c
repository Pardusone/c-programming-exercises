#include <stdlib.h>
#include <stdio.h>

float ortalama(int *dizim, int boyut)
{
int i  ;
int toplam = 0 ;
float ortalama ;
for(i=0;i<boyut;i++){
toplam += dizim[i] ;
}
return toplam/boyut ;
}

int main(){
float ort ;
int n,i ;
printf("Kac adet eleman girilecek:\n");
scanf("%d",&n);
int dizi[n];
for(i=0;i<n;i++){
printf("%d sayiyi giriniz",i+1);
scanf("%d",&dizi[i]);
}
ort = ortalama(dizi,n);
printf("Girdigimiz sayilarin ortalamasi %.3f",ort);
return 0 ;
}