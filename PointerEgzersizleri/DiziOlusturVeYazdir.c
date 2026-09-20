#include <stdio.h>
#include <stdlib.h>

int main(){

int arr[100] ;
int elemansayisi ;
int *ptr ;
ptr = arr ;

printf("Dizi kac elemanli olsun ? \n");
scanf("%d",&elemansayisi);
printf("Lutfen degerleri giriniz:\n");
for(int i = 0 ;i<elemansayisi;i++){
    scanf("%d",ptr);
    ptr ++ ;
}
ptr = arr ;
printf("Degerlerim: \n");
for(int i = 0 ;i<elemansayisi;i++){
    printf("%d ",*ptr);
    ptr ++ ;
}
}   