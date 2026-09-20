#include <stdio.h>
#include <stdlib.h>

int main()
{
    char B ;
    char T ;
    char S ;
    char h;
    int metrekare;
    int toplam;
    printf("istediginiz halý türünün kodunu giriniz \n kodlar su sekildedir \n Twetty :T 18TL \n Spiderman: S 19TL\n Bugs: B 17TL \n:");
    scanf("%c",&h);
    printf("Metrekareyi giriniz \n:");
    scanf("%d",&metrekare);
    if(h=='B'){
        toplam = metrekare*17;
        printf("toplam borcunuz: %d",toplam);
    }
    else if (h=='S') {
        toplam= metrekare*19;
        printf("toplam borcunuz: %d",toplam);
    }
    else if (h=='T') {
        toplam= metrekare*18;
        printf("toplam borcunuz: %d",toplam);
    }
    else{
        printf("Lutfen gecerli bir karakter giriniz");
    }

}
