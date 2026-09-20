#include <stdio.h>
#include <stdlib.h>

int main()
{
  float sayi;
  float mil;
  printf("km cinsinden sayiyi giriniz \n");
  scanf("%f",&sayi);
  mil = sayi/1.605 ;
  printf("%.3f km , %.5f mil' dir",sayi,mil);
}
