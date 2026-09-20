#include <stdlib.h>
#include <stdio.h>

void bolmeislemi(float bolunen,float bolen){
float kalan,bolum ;
kalan = bolunen % bolum ;
bolum = bolunen / bolum ;

}
int main()
{
int kalan , bolum ;
int a , b ;
printf("Birbirine bolmek istediginiz iki sayiyi giriniz");
scanf("%d%d",&a,&b);
bolmeislemi(a,b);
printf("Sayilarin bolumu = %.2f \n Sayilardan kalan = %.2f",a,b);

}