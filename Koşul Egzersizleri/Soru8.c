#include <stdio.h>
#include <stdlib.h>

int main(){
    float tavsayi=1042;
    float kussayi=2272;
    int yil=0;
    
    while(tavsayi<kussayi){
        yil ++ ;
        tavsayi+=tavsayi*0.038;
        kussayi+=kussayi*0.012;
        if(tavsayi>kussayi){
            printf("%d yil sonra tavsan sayisi kus sayisini gecmis olacaktir",yil);
break;
        } 
    }
}