#include <stdio.h>
#include <stdlib.h>

void tekmiciftmi(){
int a ;
printf("lutfen sayiyi giriniz:\n");
scanf("%d",&a);
if(a%2==0){
    printf("Sayi cifttir");
}
    else  {
        printf("Sayi tektir");
    }

}
int main() 
{
    tekmiciftmi();
}