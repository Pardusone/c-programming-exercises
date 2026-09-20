#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
int main()
{
    float r ;
    float alan;
    printf("Yaricap uzunlugunu giriniz \n:");
    scanf("%f",&r);
    alan = PI * r * r ;
    printf("Dairenin alani: %.2f",alan);
    return 0;
}
