#include <stdlib.h>
#include <stdio.h>

int main()
{

char isim[20] = {'b','o','n','j','o','u','r','\0'}; //nullu unutma sondaki

char *can ;

can = isim ; //karakter dizisinin ilk harfini adrese eşitledik

printf("%c \n",*can); // b karakterini bastık

printf("%c",*(can+1)); // ikinci adrese gittik 'o' karakterni basmış olduk

return 0 ;
}