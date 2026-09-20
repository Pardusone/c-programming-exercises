#include <stdlib.h>
#include <stdio.h>

int main (){

int *sayi ;
int n ;
n = 20 ;
sayi =&n; //adrese 20 değerini atadık
printf("%d\n",*sayi); //adresdeki değeri yazdırdık

*sayi= 30 ; //adrese yeni bir değer atadık 

printf("%d",*sayi); //yeni değeri yazdırdık


}