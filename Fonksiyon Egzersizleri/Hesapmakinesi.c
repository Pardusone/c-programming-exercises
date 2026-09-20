#include <stdlib.h>
#include <stdio.h>

int toplama(int can, int canan){
    return can + canan ;
}
int carpma(int kan, int kanan){
    return kan * kanan ;
}
float bolme(float pan , float panan){
    return pan / panan ;
}
int cikarma(int tan , int tanan){
    return tan - tanan ;
}
int main(){
int karar ;
float sayi1,sayi2 ;
    printf("Lutfen yapmak istediginiz islemi secin\n Toplama icin 1\n carpma icin 2 \n Bolme icin 3\n Cikarma icin 4\n Giriniz:");
    scanf("%d",&karar);
    printf("Lutfen 2 adet sayi giriniz:\n");
    scanf("%d%d",&sayi1 ,&sayi2);
    if(karar == 1){
        printf("Sayilarin toplami: %d",toplama(sayi1,sayi2));
    }
    else if(karar==2){
        printf("Sayilarin carpimi:%d",carpma(sayi1,sayi2));
    }
    else if(karar==3){
        printf("Sayilarin bolumu:%f",bolme(sayi1,sayi2));
    }
    else if(karar==4){
        printf("Cikarma sonucu:%d",cikarma(sayi1,sayi2));
     }
return 0;
}