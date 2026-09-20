#include <stdio.h>
#include <stdlib.h>
int main(){
int n, i ;
float toplam ;
printf("bir sayi degeri giriniz \n");
scanf("%d",&n);
for(i=1;i<=n;i++){
toplam += (float)1/i ;
}
printf("%.4f",toplam);
    
}