#include <stdlib.h>
#include <stdio.h>

typedef enum  {

Ocak = 1,
Subat,
Mart,
Nisan,
Mayis,
Haziran,
Temmuz,
Agustos,
Eylul,
Ekim,
Kasim,
Aralik,



} aylar ;

void ayi_goster(aylar canan){

    switch(canan)
    {
        case Ocak:
            printf("Ocak");
            break;
              case Subat:
            printf("Subat");
            break;
              case Mart:
            printf("Mart");
            break;
              case Nisan:
            printf("Nisan");
            break;
              case Mayis:
            printf("Mayis");
            break;
              case Haziran:
            printf("Haziran");
            break;
              case Temmuz:
            printf("Temmuz");
            break;
              case Agustos:
            printf("Agustos");
            break;
              case Eylul:
            printf("Eylul");
            break;
              case Ekim:
            printf("Ekim");
            break;
              case Kasim:
            printf("Kasim");
            break;
              case Aralik:
            printf("Aralik");
            break;

    }


}
int main(){

aylar can = Temmuz ; // Burada temmuz yerine temmuzu temsil eden değer olan 7 sayısını da girebilirdik enumun içindeki değerler integer değerlerdir

ayi_goster(can);


}