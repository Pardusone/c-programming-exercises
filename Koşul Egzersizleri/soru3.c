#include <stdio.h>
#include <stdlib.h>
int main(){
    char x;
    float a,b ;
    float sonuc1,sonuc2 ;
    printf("isleminizi secin(+,-) \n:");
    scanf("%c",&x);
    printf("islem yapılacak sayilari girin \n:");
    scanf("%f%f",&a,&b);
    
    sonuc1=(1/a) - (1/b);
    sonuc2=(1/a)+(1/b);
    if((a!=0)&&(b!=0)){
    if(x == '-'){
    printf("Sonuc:\n %.3f",sonuc1);
    }
    else if(x == '+'){
        
        printf("Sonuc:\n %.3f", sonuc2 );
    }
    else{
        printf("Lutfen gecerli bir islem girin");
    }
    }
    else{
        printf("0 gecersizdir");
    }
}