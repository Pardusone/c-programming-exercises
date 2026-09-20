#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct nokta {
        int abs ;
        int ord ;
    };


int main(){

    struct nokta {
        int abs ;
        int ord ;
    };

    struct nokta p ;
    p.abs = 3 ;
    p.ord = 2 ;

    printf("X koordinati: %d \nY koordinati: %d",p.abs,p.ord);
}