#include <stdio.h>
#include <stdlib.h>

void carpanbulucu(){
int a ;
printf("Lutfen sayiyi giriniz\n");
scanf("%d",&a);
if(a%2==0){
    printf("%d cift sayidir");
    }
    else if(a%3==0){
        printf("%d ucun tam katidir");
    }
    else if(a%2==0 && a%3==0){
        printf("%d sayi altinin tam katidir");
    }
}
int main(){
carpanbulucu() ;
}