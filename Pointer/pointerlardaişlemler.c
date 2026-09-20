#include <stdlib.h>
#include <stdio.h>

int main (){

int *ad1, *ad2, *ad3 ;
int n = 10 , p = 20 ;

ad1 =& n;  //ad1 10
ad2 =& p ; //ad2 20

printf("Atamadan once ad1 degeri %d \n",*ad1);


*ad1 = *ad2 + 20 ; //ad1 artık 22 , adres değişmez

printf("Atamadan sonra ad1 degeri %d",*ad1);

}