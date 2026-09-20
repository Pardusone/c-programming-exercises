#include <stdlib.h>
#include <stdio.h>



float squareRoot(float num) {
    float x = num;
    float y = 1;
    float epsilon = 0.000001; // Hesaplama hassasiyeti
    
    while ((x - y) > epsilon) {
        x = (x + y) / 2;
        y = num / x;
    }
    
    return x;
}




int main()
{
float a ;
printf("Lutfen karekokunu almak istediginiz sayiyi giriniz:\n");
scanf("%f",&a);
float karekok = squareRoot(a);
printf("Sonucunuz:%.3f",karekok);
}