#include <stdlib.h>
#include <stdio.h>

int main() {
    char kelime1[50], kelime2[50], kelime3[50], kelime4[50], kelime5[50];
    char *ptr1 ;
    printf("Lutfen 5 adet kelime giriniz\n");

    printf("1.Kelime: ");
    scanf("%s", kelime1);

    printf("\n2.Kelime: ");
    scanf("%s", kelime2);

    printf("\n3.Kelime: ");
    scanf("%s", kelime3);

    printf("\n4.Kelime: ");
    scanf("%s", kelime4);

    printf("\n5.Kelime: ");
    scanf("%s", kelime5);
    
    printf("\n");
    printf("1.Kelimenin tersten hali: ");

    for (ptr1 = kelime1; *ptr1 != '\0'; ptr1++) ;
    ptr1-- ;
    while(ptr1>=kelime1){
        printf("%c",*ptr1);
        ptr1--;
    }
    printf("\n2.Kelimenin tersten hali: ");
    for (ptr1 = kelime2; *ptr1 != '\0'; ptr1++) ;
    ptr1-- ;
    while(ptr1>=kelime2){
        printf("%c",*ptr1);
        ptr1--;
    }
     printf("\n3.Kelimenin tersten hali: ");
    for (ptr1 = kelime3; *ptr1 != '\0'; ptr1++) ;
    ptr1-- ;
    while(ptr1>=kelime3){
        printf("%c",*ptr1);
        ptr1--;
    }
     printf("\n4.Kelimenin tersten hali: ");
    for (ptr1 = kelime4; *ptr1 != '\0'; ptr1++) ;
    ptr1-- ;
    while(ptr1>=kelime4){
        printf("%c",*ptr1);
        ptr1--;
    }
     printf("\n5.Kelimenin tersten hali: ");
    for (ptr1 = kelime5; *ptr1 != '\0'; ptr1++) ;
    ptr1-- ;
    while(ptr1>=kelime5){
        printf("%c",*ptr1);
        ptr1--;
    }

    return 0;
}
