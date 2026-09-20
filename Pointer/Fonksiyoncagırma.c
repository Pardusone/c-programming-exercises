#include <stdlib.h>
#include <stdio.h>

void degistir(int *ad1, int *ad2){

int gecici ;
gecici = *ad1 ;
*ad1 = *ad2 ;
*ad2 = gecici ;



}


int main () {

     int a = 10 ;
     int b = 20 ;

     printf("Cagirmadan onceki degerlerim %d %d \n",a,b);

     degistir(&a,&b);

     printf("Cagirdiktan sonra %d %d",a,b);




    return 0 ;
}