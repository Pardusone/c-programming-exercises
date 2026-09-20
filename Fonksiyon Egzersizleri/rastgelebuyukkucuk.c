#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int enbuyuk(int A[],int elemansayisi)
{
int i,enb;
enb = A[0];
for(i=1;i<elemansayisi;i++){
    if(A[i]>enb){
        enb = A[i];
    }
    
}
    return enb ;
}
int enkucuk(int B[],int elemansayisi2){
    int i,enk ;
    enk = B[0];
    for(i=1;i<elemansayisi2;i++){
        if(B[i] < enk){
            enk = B[i];
        }
    }
    return enk ;
}

int main(){
int n,i ; 
printf("Kac adet sayi ureteceksin \n");
scanf("%d",&n);
int dizi[n] ;
srand(time(0));
printf("Dizi elemanlari\n");
for(i=0;i<n;i++){
    dizi[i] = rand()%100;
    printf("%d\n",dizi[i]);
}
printf("En buyuk deger = %d \n",enbuyuk(dizi,n)) ;

printf("En kucuk deger = %d \n",enkucuk(dizi,n));

return 0 ;
}