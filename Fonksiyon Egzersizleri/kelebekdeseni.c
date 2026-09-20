#include <stdio.h>

void kelebekDeseni(int n) {
    int i, j;

    // Üst kısım
    for (i = 0; i < n; i++) {
        for (j = 0; j < i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    // Alt kısım
    for (i = n; i > 0; i--) {
        for (j = 0; j < i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Desenin boyutunu girin: ");
    scanf("%d", &n);

    kelebekDeseni(n);

    return 0;
}
