#include <stdio.h>
#include <stdlib.h>

int main(){

char cumle[100];
int i ;
printf("Lutfen bir cumle giriniz\n");
gets(cumle);

for(i=0;cumle[i];i++){ /* son karaktere kadar git ve fordan çık demek cumle[i] */

printf("%c\n",cumle[i]);

} 
return 0 ;
}