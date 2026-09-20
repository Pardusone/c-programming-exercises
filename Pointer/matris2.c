#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
  char tekrar_oyna;
  do {
    int n, i, j, k, sayac, skor, max_skor;
    int ayseskor = 0, betulskor = 0;
    srand(time(NULL));

    printf("Lutfen matris boyutunu giriniz: ");
    scanf("%d", &n);

    int matrix[n][n];
    for (i = 0; i < n; i++) {
      for (j = 0; j < n; j++) {
        matrix[i][j] = rand() % (n*n) + 1;
      }
    }

    printf("\nMatris:\n");
    for (i = 0; i < n; i++) {
      for (j = 0; j < n; j++) {
        printf("%d\t", matrix[i][j]);
      }
      printf("\n");
    }

    skor = 0;
    max_skor = 0;
    for (k = 0; k < 6; k++) {
      for (i = 0; i < n/2; i++) {
        for (j = i; j < n-i-1; j++) {
          sayac = matrix[i][j];
          matrix[i][j] = matrix[n-j-1][i];
          matrix[n-j-1][i] = matrix[n-i-1][n-j-1];
          matrix[n-i-1][n-j-1] = matrix[j][n-i-1];
          matrix[j][n-i-1] = sayac;
        }
      }

      printf("\n%d. dondurme sonucu:\n", k+1);
      for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
          printf("%d\t", matrix[i][j]);
        }
        printf("\n");
      }

      skor = 0;
      for (i = n/2; i < n; i++) {
        for (j = n/2; j < n; j++) {
          skor += matrix[i][j];
        }
      }
      printf("Score: %d\n", skor);
      if (skor > max_skor) {
        max_skor = skor;
      }
    }

    printf("\nEn yuksek skor: %d\n", max_skor);

    if (max_skor > betulskor) {
      ayseskor += max_skor - betulskor;
    } else {
      betulskor += max_skor - ayseskor;
    }
    printf("Ayse: %d\tBetul: %d\n", ayseskor, betulskor);
    if (ayseskor > betulskor) {
      printf("Ayse kazandi!\n");
    } else if (betulskor > ayseskor) {
      printf("Betul kazandi!\n");
    } else {
      printf("Berabere!\n");
    }

    printf("\nTekrar oynamak icin 'e' ya da 'E' ye basin): ");
    scanf(" %c", &tekrar_oyna);
  } while (tekrar_oyna == 'E' || tekrar_oyna == 'e');

  return 0;
}
