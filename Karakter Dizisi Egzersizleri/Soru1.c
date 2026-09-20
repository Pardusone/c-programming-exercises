#include <stdlib.h>
#include <stdio.h>
int main(){
char cumle[100] ;
int i ;
int sayac = 0;

printf("Lutfen cumleyi giriniz: \n");
gets(cumle);

while(cumle[i]) {
    if(cumle[i]==32){
    sayac ++ ;
    }
    i ++ ;
}
printf("Cumledeki kelime sayisi %d 'dir \n",sayac + 1);

return 0 ;
}