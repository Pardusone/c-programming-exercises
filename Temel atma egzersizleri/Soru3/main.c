#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("lutfen sayilari giriniz \n");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b && a>c){
        printf("En buyuk sayi %d 'dir \n",a);
    }
    else if (b>a && b>c) {
        printf("En buyuk sayi %d 'dir \n",b);
    }
    else if (c>a && c>b){
        printf("En buyuk sayi %d 'dir \n",c);

    }
    if (a<b && a<c){
        printf("En kucuk sayi %d 'dir",a);
    }
    else if (b<a && b<c) {
        printf("En kucuk sayi %d 'dir",b);
    }
    else if (c<a && c<b){
        printf("En kucuk sayi %d 'dir",c);

    }
    else{
        printf("2 veya daha fazla sayi birbirine esittir");
    }
}
