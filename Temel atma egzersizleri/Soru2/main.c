#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,h;
    float hacim;
    float yanalalan;
    float tabanalan;
    float toplamalan;
    printf("Lutfen dikdortgenler prizmasina ait bilgileri giriniz \n");
    scanf("%f%f%f",&a,&b,&h);
    yanalalan= a*h*2 + b*h*2 ;
    tabanalan = a*b*2 ;
    toplamalan= yanalalan + tabanalan ;
    hacim = a*b*h ;
    printf("Dikdortgenler prizmasina ait bilgiler sunlardir: \n");
    printf(" Hacim:%.2f \n Yanal alan:%.2f \n Taban alan:%.2f \n Toplam alan:%.2f \n",hacim,yanalalan,tabanalan,toplamalan);
}
