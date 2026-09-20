#include <stdlib.h>
#include <stdio.h>

void yerdegistir(int a, int b){
int c , d ;
c = a;
d = b;
a = d ;
b = c ;

}
int main()
{
int a , b ;
printf("Yerini degistirmek istediginiz sayilari giriniz: \n");
scanf("%d%d",&a,&b);
yerdegistir(a,b);
printf("1.Sayi:%d \n2.Sayi:%d",b,a);
}