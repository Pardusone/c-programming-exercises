#include <stdio.h>

int main()
{
    int dizim[10];
    int i, a, j;
    int max, min;

    printf("Lutfen dizinin elemanlarini giriniz:\n");

    for (i = 0; i < 10; i++) {
        scanf("%d", &a);
        dizim[i] = a;
    }

    max = dizim[0];
    min = dizim[0];

    for (j = 1; j < 10; j++) {
        if (dizim[j] > max) {
            max = dizim[j];
        }
        if (dizim[j] < min) {
            min = dizim[j];
        }
    }

    printf("En buyuk sayi: %d\nEn kucuk sayi: %d", max, min);

    return 0;
}
