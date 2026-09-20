#include <stdlib.h>
#include <stdio.h>

void baklavagoruntusu(int a){
    int isaretsayisi ;
    int i,j ;
    for(i = 1;i<=a;i++){
        isaretsayisi = (2*i-1);
        for(j=1;j<=isaretsayisi;j++){
            printf("c");

        }
        printf("\n");
    }
    

}


int main(){
    int satir ;
    printf("Satir sayisini giriniz:\n");
    scanf("%d",&satir);
    baklavagoruntusu(satir);
}