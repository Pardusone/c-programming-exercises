#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void kayitsil(int A[],int sira,int elemansayisi){
    int i ;

    for(i=sira - 1;i<elemansayisi-1;i++){

    A[i] = A[i+1];    
    }
    printf("Kayit silindikten sonraki durum: \n");
    for(i=0;i < elemansayisi-1;i++){
        printf("%d\n",A[i]);
    }
    

}


int main(){
int n,i ;
int sirano ;
printf("Kac adet sayi uretmek istersiniz \n");
scanf("%d",&n);
int dizi[n];
srand(time(0));
printf("Dizi elemanlari \n");

for(i=0;i<n;i++){
dizi[i] = rand()%100;
printf("%d\n",dizi[i]);
}
printf("Silinecek sira no'yu giriniz \n");
scanf("%d",&sirano);
kayitsil(dizi,sirano,n);

return 0 ;
}
