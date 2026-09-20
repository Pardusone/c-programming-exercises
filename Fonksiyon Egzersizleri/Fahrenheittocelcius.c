#include <stdlib.h>
#include <stdio.h>
#include <math.h>
float cevir(int fahrenheit){
float celcius;
 ;
celcius = (fahrenheit - 32) / 1.8 ;
return celcius ;
}
int main(){
int a;
float sonuc ;
printf("Lutfen celciusa cevirmek isstediginiz fahrenheit degerini giriniz:\n");
scanf("%d",&a);
sonuc = cevir(a);
printf("%d fahrenheit %.3f derecedir",a,sonuc);
}