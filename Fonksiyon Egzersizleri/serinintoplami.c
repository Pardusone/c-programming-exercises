#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int seritoplami(int a[]){
int i,j;
int toplam = 0 ;
for(i=0;i<4;i++){
    for(j=1;j<=4;j++){
        a[i] = pow(j,2);
        toplam += a[i] ;
    }
}
return toplam/4 ;
}
int main()
{

int x[4] ;

printf("Seri sonucu %d'dir",seritoplami(x));

}