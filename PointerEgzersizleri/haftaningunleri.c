#include <stdlib.h>
#include <stdio.h>

int main(){
    
    int sayi ;
    char *gun[7] = {"pazartesi","sali","carsamba","persembe","cuma","cumartesi","pazar"};
    
    do
    {
    
    printf("Lutfen 1 ile 7 arasinda bir deger giriniz:\n");
    scanf("%d",&sayi);
    
    } while (sayi <= 0 || sayi > 7);

    printf("%d numarali haftanin gunu %s",sayi,gun[sayi - 1]);    
  
 return 0 ;
}