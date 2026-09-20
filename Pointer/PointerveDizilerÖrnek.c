#include <stdlib.h>
#include <stdio.h>

int main()
{

int t[100]  ;
int i ;
int *pt;
/*
for(i=0;i<100;i++){

    t[i] = 0;
}
for(i=0;i<100;i++)
{
    printf("%d\n",t[1]);
}
 normal şekilde böyle 100 tane 0 yazılabilir */


for(pt=t;pt<t+100;pt++) //t ilk elemanın adresidir +100 dedik çünkü 100 eleman yazıcaz
{

    *pt = 0 ; //ilk eleman 0 oldu
    printf("%d \n",*pt);

}
return 0 ;
    
}