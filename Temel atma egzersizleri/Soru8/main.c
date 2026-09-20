#include <stdio.h>
#include <stdlib.h>

int main()
{
    int satir = 0;
    int n;
    int i=0;
    printf("sayi girin \n");
    scanf("%d",&n);
    while(i<n){
        i++;
        if(i%17==0){
                satir++;

          printf("%5d",i);

          if(satir%10==0){


            printf("\n");
          }
        }


    }
}
