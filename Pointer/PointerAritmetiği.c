#include <stdlib.h>
#include <stdio.h>

int main (){

int arr[] = {10 , 20 , 30 , 40 , 50};
int *ptr ;

ptr = arr ;

printf("%d \n",&arr[0]) ; //ilk elemanın adresine baktık 

// ya da şöyle de bakılabilir ikinci elemanın adresi için + 1 dedik

printf("%d \n",ptr + 1) ; 


//altta ise elemanın o adresteki değerine baktık

printf("%d",*(ptr + 1)) ; 

return 0 ;
}