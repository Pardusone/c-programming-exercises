#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
        char isim[10];
        int abs ;
        int ord ;
    }nokta;

    void ekranayazdir(nokta p[],int n)
    {
        int i ;
        for(i=0;i<n;i++){
            printf("%s = (%d,%d)\n",p[i].isim,p[i].abs,p[i].ord);
        }


    }

int main(){

    nokta Can[5] = {{"Can",3,4},{"Hakan",5,3},{"Osman",6,7},{"Dere",8,9},{"Apo",9,4}} ;
    ekranayazdir(Can,5);
}