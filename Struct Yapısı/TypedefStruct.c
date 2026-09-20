#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct  { //typedef şeklinde de bu şekilde kullanabiliriz

    float x_ekseni ;
    float y_ekseni ;
} nokta ;



int main(){

nokta can;

can.x_ekseni = 3 ;
can.y_ekseni = 2;

printf("X ekseni:%.2f Y ekseni:%.2f",can.x_ekseni,can.y_ekseni);

}