//Enum: tek tip sembolik listelere denir ilk değişken tanımlı olarak  0 alır. Ondan sonra gelen değerler ardışık değerlerdir.

#include <stdio.h>
#include <stdlib.h>

typedef enum renkler {

mavi,
kirmizi,
yesil

}renk ;


int main(){

renk can = kirmizi ;

printf("%d",can);

} //Görüldüğü gibi ardışık sayıları kendi atadı kırmızı rengi 1i tesil ediyor yani integer veri tipini 

//typedef kullandığım için artık tekrar enum yazmama gerek kalmadı renk zaten onu temsil etmiş oldu.