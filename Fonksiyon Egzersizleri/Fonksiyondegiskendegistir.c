#include <stdio.h>
#include <stdlib.h>

float calcul(float bir,float iki,char operasyon){

float islemsonucu;
switch(operasyon)
{
    case'+':
    {
        islemsonucu = bir + iki ;
        break ;
    }
    case'-':
    {
        islemsonucu = bir - iki ;
        break ;
    }
    case'*':
    {
        islemsonucu = bir*iki;
        break ;
    }
    case'/':
    {
        islemsonucu = bir/iki ;
    }   break ;
}
return islemsonucu ;

}






int main(){
    
    
    float birincisayi,ikincisayi;
    char islem ;
    float sonuc ;
    printf("Hangi islemi yapmak istiyorsunuz\n");
    scanf("%c",&islem);
    printf("Lutfen 2 adet sayi giriniz\n");
    scanf("%f%f",&birincisayi,&ikincisayi);
    sonuc = calcul(birincisayi,ikincisayi,islem);
    printf("%.2f",sonuc);
     return 0;
}