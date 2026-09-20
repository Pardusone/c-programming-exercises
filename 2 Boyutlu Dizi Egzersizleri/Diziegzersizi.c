#include <stdio.h>
#include <stdlib.h>
#define CAN 10

int main(){
    int i ;
    int j ;
    int n ;
    int dizi[CAN][CAN];
    printf("Kac sutunluk bir matris arzu edersiniz?\n");
    scanf("%d",&n);
    if(n>CAN)
    {
        n = CAN;
    }
    printf("\n\np");
    for(i=0;i<n;i++)
    {
        printf("%4d",i);
    }
    return 0;
}