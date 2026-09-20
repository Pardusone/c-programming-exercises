#include <stdio.h>
#include <stdlib.h>
int main(){
    int sayi ;
    printf("lutfen bir sayi girin \n:");
    scanf("%d",&sayi);
    if(sayi%13==0){
        printf("sayi 13e tam bolunur");

    }
    else if(sayi%17==0){
        printf("sayi 17e tam bolunur");
    }
    else{
        printf("sayi 13 ve 17ye bolunmez");
    }
}