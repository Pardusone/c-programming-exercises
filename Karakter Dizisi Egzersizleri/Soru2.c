#include <stdlib.h>
#include <stdio.h>

int main(){

char cumle[100];
int i = 0 ;

printf("Cumleyi giriniz \n");
gets(cumle);

while (cumle[i]){
if(cumle[i]!='\0'){

i ++ ;

}
}
printf("Cumledeki karakter sayisi: %d \n",i);

return 0 ;
}