#include <stdlib.h>
#include <stdio.h>

int main(){

/*Klavyeden girilen bir kelimenin tersten okunuşunun da aynı olup olmadığını bulan programı yazınız*/
char *p1 , *p2 ;
char cumlem[100] ;
int kontrol ;
printf("Lutfen max  100 karakterli bir cumle giriniz:\n");
gets(cumlem); //scanf kullanmadık çünkü scanf boşluğu görünce durur

for(p2=cumlem;*p2;p2++) //şartın anlamı nullu görene kadar git demek *p2 kelimeleri temsil eder 
{

}
p2-- ; //nuldan bir önceki karaktere gelmiş olduk yani girilen son karaktere

kontrol = 1 ;
for(p1=cumlem; kontrol&&p1<p2; p1++,p2--) //p1'i arttırırken p2'yide azaltıyoruz ortada birleşecekler
{

    if(*p1 != *p2){

        kontrol = 0 ;
        
    }
    if(kontrol==1) {
        kontrol = 0 ;
        printf("Girilen cumlem '%s' palendromdur",cumlem) ;
    }

    else{
        printf("girilen cumle '%s' palendrom degldir",cumlem) ;
    }
}

return 0 ;
}