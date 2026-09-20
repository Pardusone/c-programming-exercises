#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b ;
    printf("Lutfen carpmak istediginiz sayilari girin \n");
    scanf("%d%d",&a,&b);
    if(a*b<0){
        printf("-1");
    }else if(a*b>0){
        printf ("+1"); }
    else{
        printf("0");
 }
}
