#include <stdlib.h>
#include <stdio.h>

void kalanbolen(int bolunen , int bolen){
int kalan ;
float bolum ;

bolum = bolunen / bolen ;
kalan = bolunen % bolen ;

printf("Kalan: %d \nBolum: %.3f",kalan,bolum);

}
int main()
{
int a , b ;
printf("Lutfen bolunen ve boleni giriniz:\n",a,b);
scanf("%d",&a);
scanf("%d",&b);
kalanbolen(a,b);
}