#include <stdlib.h>
#include <stdio.h>

int main() {
    int ust_sinir;
    int j = 0;
    int *ptr;

    printf("0 ila hangi sayi arasindaki tek ve cift sayilara bakmak istersiniz? \n");
    scanf("%d", &ust_sinir);
    int dizim[ust_sinir];

    for (int i = 0; i < ust_sinir; i++) {
        dizim[i] = j;
        j++;
    }
    ptr = dizim;

    while (*ptr < ust_sinir) {
        if (*ptr % 2 == 0) {
            printf("cift sayilar : %d\n", *ptr);
        }
        ptr++;
    }
    ptr = dizim ;
        while (*ptr < ust_sinir) {
        if (*ptr % 2 != 0) {
            printf("tek sayilar : %d\n", *ptr);
        }
        ptr++;
    }

    return 0;
}
