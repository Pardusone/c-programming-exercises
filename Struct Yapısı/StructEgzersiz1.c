#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    struct ogrenci_bilgi
{

    char isim[100];
    char soyisim[100];
    int yas ;

};

struct ogrenci_bilgi ogrenci1,ogrenci2 ;
ogrenci1.yas = 18 ;
strcpy(ogrenci1.isim,"Can");
strcpy(ogrenci1.soyisim,"Boz");

ogrenci2 = ogrenci1 ;

return 0 ;
    
}