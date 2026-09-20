#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct ogrenci{

char ad[10];
char soyad[10];
int no ;

};



int main(){
//Struct içindeki verilere erişmek ve değiştirmek için, değişkenin adı ve verinin adı yazılmalıdır.
//örnek

struct ogrenci can ;
strcpy(can.ad,"Can"); //bu fonksiyon ile char veri tipindeki değişkenleri değiştirmiş olduk
strcpy(can.soyad,"Boz"); //strcpy sağdakini soldakine eşitler solda struct yapısının içindeki veriye erişmiştik fonksiyonla sağdakine eşitlemiş olduk
can.no = 27 ; //integer veri tipi için fonksiyona ihtiyaç duymadık 

printf("%s \t %s \t %d",can.ad,can.soyad,can.no) ;

return 0 ;
}