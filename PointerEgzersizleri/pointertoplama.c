#include <stdlib.h>
#include <stdio.h>

int main()

{
int sayi1 ;
int sayi2 ;


printf("Lutfen toplamak istediginiz sayilari giriniz \n");
scanf("%d %d",&sayi1,&sayi2);
int sayitoplam = sayi1 + sayi2 ;
int *sayitoplamptr = &sayitoplam ;
printf("Sayilarin toplami %d",*sayitoplamptr);

}