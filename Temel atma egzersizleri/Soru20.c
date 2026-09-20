#include <stdio.h>
#include <stdlib.h>
int main(){
float x ;
do
{
    printf("bir pozitif sayi giriniz \n:");
    scanf("%f",&x);
    if(x<0){
        printf("Lutfen pozitif bir sayi giriniz \n");
    }
    if(x<0)continue;
        printf("sayimizin karekoku: %f \n",sqrt(x));
    
} while (x);
return 0 ;
}
