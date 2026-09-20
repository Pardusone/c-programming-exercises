#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float ucgenalan(float kenar)
{
float alan ;
alan = (kenar * kenar * sqrt(3)) / 4 ;
return alan ;
}

int main()
{
int kenar ;
float alan ;
printf("Alanini bulmak istediginiz ucgenin kenar uzunlugunu giriniz:\n");
scanf("%d",&kenar);
alan = ucgenalan(kenar);
printf("Ucgenin alani: %f'dir",alan);
}