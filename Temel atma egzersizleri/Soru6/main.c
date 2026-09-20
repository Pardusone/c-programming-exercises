#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x ;
    float y;
    printf("Hesaplanmak istenen sayiyi giriniz: \n");
    scanf("%f",&x);
    y = x*x*x + 13*x*x + 47*x + 5 ;
    printf("F(x): %.2f",y);
}
