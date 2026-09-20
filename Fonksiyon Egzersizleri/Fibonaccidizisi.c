#include <stdio.h>
#include <stdlib.h>

void fibonacci(int n){
int ilk = 0;
int ikinci = 1 ;
int sonraki ;
int i ;
printf("Uretilen fibonacci sayilari:\n");
for(i=0;i<n;i++){
    if(i<=1){
        sonraki = i;
    }
    else
    {
    sonraki=ilk + ikinci;
    ilk=ikinci;
    ikinci=sonraki;
    }
    printf("%d\n",sonraki);
}
}

int main(){
    int sayi ;
    printf("Kac adet fibonacci sayisi olusturulacak:\n");
    scanf("%d",&sayi);
    fibonacci(sayi);
}