#include <stdlib.h>
#include <stdio.h>

void floyd(int n){
int j  ;
int i = 1 ;
int a = 1 ;
while(i<=n){
    j = 1 ;
    while(j<=i){
        printf("%3d",a);
        j++;
        a++;
    }
    printf("\n");
    i++;
}
}



int main(){
int satir ;    
printf("Floyd ucgeni icin satir sayisini giriniz\n");
scanf("%d",&satir);
floyd(satir);
return 0 ;
}