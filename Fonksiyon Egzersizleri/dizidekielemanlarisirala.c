#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

void bubbleSort(int arr[], int size) {
    int i, j, temp;
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Elemanları yer değiştir
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    setlocale(LC_ALL, ""); // Türkçe karakterleri desteklemek için

    int n, i;
    printf("Dizi kac elemanli olsun: ");
    scanf("%d", &n);
    
    int arr[n];

    // Rastgele sayıları üretmek için zamanı kullan
    srand(time(NULL));

    // Diziye rastgele sayıları ata
    for (i = 0; i < n; i++) {
        arr[i] = rand();
    }
    
    printf("Olusturulan dizi: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    bubbleSort(arr, n);

    printf("Siralanmis dizi: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}