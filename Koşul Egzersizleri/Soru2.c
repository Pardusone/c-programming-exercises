#include <stdio.h>
#include <stdlib.h>
int main(){
    int time;
    float borc,borc2 ;
    printf("lutfen sureyi girin\n");
    scanf("%d",&time);
    if(time<=3){
        borc= time*0.25;
        printf("Borcunuz=%.3f TL",borc);
    }
    else{
        borc2=((time-3)*0.08)+0.75;
        printf("Borcunuz: %.3f TL",borc2);
    }
}