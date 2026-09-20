#include <stdio.h>
#include <stdlib.h>

int main(){

int i;
int j;
int n;

printf("I");
for(i=1;i<=10;i++){
    printf(" ");
    printf("%2d",i);
}
printf("\n");
for(i=0;i<8;i++){
    printf("---");
}
printf("\n");
for(i=1;i<=10;i++){
    printf("%d",i);
    for(j=1;j<=10;j++){
        printf("%3d",i*j);
    }
    printf("\n");
}
}