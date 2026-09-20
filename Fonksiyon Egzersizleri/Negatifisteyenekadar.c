#include <stdio.h>
#include <stdlib.h>

void sayiiste(){
    int i ;
    do
    {
    printf("Lutfen sayiyi giriniz");
    scanf("%d",&i);
    } while (i>0);
    }
int main(){

sayiiste();

}