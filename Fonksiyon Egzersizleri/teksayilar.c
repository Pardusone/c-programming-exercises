#include <stdio.h>
#include <stdlib.h>

void teksayilar(){
    int a = 0;
    int b = 2;
    do
    {
    a++;
    b++;
    if(a%2!=0){
        printf("%d\n",a);
    }

    } while (a<b);
    
}
int main(){
    teksayilar();
}