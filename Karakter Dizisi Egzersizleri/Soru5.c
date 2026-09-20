#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
char cumle[150];
printf("Lutfen bir cumle giriniz \n");
gets(cumle);
char harf ;
int encok ;
int kucukharf[26] = {0} ;
int i = 0 ;

while(cumle[i]) {

if(cumle[i] >= 'a' && cumle[i] <= 'z'){

    kucukharf[cumle[i]- 'a']++ ;
}
     i++ ;
}
encok = kucukharf[0];

for(i=1;i<26;i++){

if(kucukharf[i]!=0){

if(kucukharf[i]>encok){
    encok = kucukharf[i];
    harf = i + 'a';
}

}

}
printf("En fazla kullanilan harf: %c",harf);
    return 0 ;
}