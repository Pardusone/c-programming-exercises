#include <stdlib.h>
#include <stdio.h>

int main (){

    int can = 10 ;
    int *p; // değeri belli olmasa bile 4 bytelık yer ayrıldı
     
    p = &can ; // değerini p için ayrılan adrese atamış olduk
printf("%d\n",p); //p adresinin konumunu yazdırdık
printf("%d\n",can); //can'ı yazdırdık
printf("%d\n",*p); //p adresindeki değeri işaret ettik ve yazdırdık yani 10

}