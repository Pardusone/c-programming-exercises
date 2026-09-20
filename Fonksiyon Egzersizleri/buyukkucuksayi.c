#include <stdio.h>
#include <stdlib.h>

void karsilastir(){
    int a,b ;
    printf("Lutfen karsilastirmak istediginiz sayilari giriniz\n");
    scanf("%d%d",&a,&b);
    
    if(a<b){
        printf("%d %d'den buyuktur",b,a);
    }
    else if(a>b){
        printf("%d %d'den buyuktur",a,b);
    }
    else{
        printf("%d = %d",a,b);
    } 

}
int main(){
    
    karsilastir();
}