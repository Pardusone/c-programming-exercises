#include <stdio.h>
#include <stdlib.h>

int main()
{
   int sayi;
   int birlerbasamagi;
   int onlarbasamagi;
   int yuzlerbasamagi;
   int binlerbasamagi;
   printf("bir sayi giriniz \n");
   scanf("%d",&sayi);
   birlerbasamagi = sayi % 10;
   onlarbasamagi = sayi % 100/10;
   yuzlerbasamagi = sayi % 1000/100;
   binlerbasamagi = sayi % 10000/1000;
   printf("sayinin birler basamagi: %d \n sayinin onlar basamagi: %d \n sayinin yuzler basamagi: %d \n sayinin binler basamagi: %d ",birlerbasamagi,onlarbasamagi,yuzlerbasamagi,binlerbasamagi);
}
