#include <stdio.h>
#include <stdlib.h>
#define Pi 3.14
float daireninalani(float r){
float alan ;
alan = Pi*r*r;
return alan ; 
}

int main()
{
float yaricap ;
printf("Alanini hesaplamak istediginiz dairenin yaricapini giriniz:\n");
scanf("%f",&yaricap);
printf("%.2f",daireninalani(yaricap));
}