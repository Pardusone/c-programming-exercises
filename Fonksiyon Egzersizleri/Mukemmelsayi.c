#include <stdio.h>
#include <stdlib.h>
void mukemmelsayi(){
     int i,sayi;
    int sonuc = 0 ;
    printf("Lutfen sayiyi giriniz:\n");
    scanf("%d",&sayi);
    for(i=1;i<sayi;i++){
        if(sayi%i==0){
            sonuc += i;
            }
    }
    if(sonuc==sayi){
        printf("Sayi mukemmel sayidir");
    }
    else{
        printf("Sayi mukemmel sayi degildir");
    }

}

int main(){
mukemmelsayi();

}