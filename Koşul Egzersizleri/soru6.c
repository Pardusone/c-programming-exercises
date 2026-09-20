#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int n,i ;
    float x,seri ;
    char a;
    do
    {
     printf("\n Lutfen pozitif bir tam sayi giriniz \n");
    scanf("%d",&n);
    printf("lutfen bir reel sayi girin \n");
    scanf("%f %c",&x,&a);
    
    for(i=1;i<=2*n-1;i+=2){
    seri+=i/pow(x,i+1);
    }
    printf("Sonuc= %f",seri);
    
    } while ((a=='e')||(a=='E'));
return 0;
} 