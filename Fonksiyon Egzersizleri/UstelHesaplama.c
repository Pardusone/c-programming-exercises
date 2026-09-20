#include <stdio.h>
#include <stdlib.h>

int ustelhesaplama(int taban,int us){
int i ;
for(i=1;i<us;i++){
    taban = taban*taban;
}
return taban ;
}
int main(){
int sayi1,sayi2 ;
printf("Lutfen taban once olacak sekilde taban ve us degerlerini giriniz:");
scanf("%d%d",&sayi1,&sayi2);
printf("Sonuc:%d",ustelhesaplama(sayi1,sayi2));
}