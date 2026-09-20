#include <stdlib.h>
#include <stdio.h>

void ucgenc(int n)
{
int i,j ;
int bosluksayisi = n - 1 ;
for(i=1;i<=n;i++){
    
    for(j=1;j<bosluksayisi;j++){
        printf(" ");
    }
    bosluksayisi-- ;
    for(j=1;j<=2*i-1;j++){
        printf("c");
    }
    printf("\n");
}
}

void altucgen(int n)
{
int bosluksayisi = 1 ;
int i , j ;
for(i=1;i<=n-1;i++)
{
    for(j=1;j<=bosluksayisi;j++){
        printf(" ");
    }
    bosluksayisi++;
    for(j=1;j<=2*(n-i)-1;j++){
        printf("+");
    }
    printf("\n");
}


}



int main()
{
int satir ;
printf("Lutfen satir sayisini giriniz: \n");
scanf("%d",&satir);
ucgenc(satir);
altucgen(satir);
}