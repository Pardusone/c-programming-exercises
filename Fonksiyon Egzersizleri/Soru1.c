#include <stdlib.h>
#include <stdio.h>

int topla(int can,int canan){

return can + canan ;

}




int main(){
int sayi1,sayi2;
printf("Lutfen 2 adet sayi giriniz \n");
scanf("%d%d",&sayi1,&sayi2);
printf("Sayilarin toplami: %d",topla(sayi1,sayi2));
return 0 ;
}