#include <stdlib.h>
#include <stdio.h>

int main(){

char kelime[100] ;
char *giris ;
char *son ;
int kontrol;
printf("Lutfen kontrol etmek istediginiz kelimeyi giriniz:\n");
gets(kelime);
for(son=kelime;*son;son++);
son -- ;
kontrol = 1;
for(giris = kelime;kontrol && giris<son;giris++,son--){
    if(*giris != *son){
        kontrol = 0 ;
    }
}
if(kontrol){
printf("Girilen '%s' palendromdur",kelime);
}
else{
    printf("Girilen '%s' palendrom degildir",kelime);
}

}