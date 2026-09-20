#include <stdio.h>
#include <stdlib.h>
int main() {
char apo;
printf("lutfen bir buyuk harf giriniz \n:");
scanf("%c",&apo);
if((apo >= 'A') && (apo<='Z')) {
printf("kucuk harfiniz : %c \n",tolower (apo));
}
else {
printf("lutfen yalnızca buyuk bir harf giriniz");
}
return 0;
}