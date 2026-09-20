#include <stdlib.h>
#include <stdio.h>

int main (){

char can[100] = "canan" ; //dizimin ismi dizimin ilk elemanının adresine eşittir  
char *p1 ;

p1 = can ; //dizimin ilk elemanı p1 adresine atandı


printf("5. karakterim %c 'dir \n",*(p1 + 4)); // dizinin ilk karakteri p1 adresinde olduğu için p1 + 4 dedik 


}