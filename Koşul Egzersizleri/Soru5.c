#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,i ;
    float x,seri ;
    printf("Lutfen pozitif bir tam sayi giriniz \n");
    scanf("%d",&n);
    printf("lutfen bir reel sayi girin \n");
    scanf("%f",&x);
    for(i=1;i<=2*n-1;i+=2){
    seri+=i/pow(x,i+1);
    }
    printf("Sonuc= %f",seri);
    return 0;
}