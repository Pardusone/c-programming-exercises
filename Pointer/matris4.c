#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(NULL));
    int N, i, j, temp, bp=0, ap=0, k, c ;
    printf("matrisin boyutunu girin:");
    scanf("%d",&N);
    int A[N][N];
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            A[i][j] = rand() % (N*N); 
        }
    }
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d",A[i][j]); 
        }
        printf("\n");
    }
    
    for(k=0;k<12;k++){
        for (i = 0; i < N / 2; i++) {
            for (j = i; j < N - i - 1; j++) {
            temp = A[i][j];
            A[i][j] =A[N - j - 1][i];
            A[N - j - 1][i] = A[N - i - 1][N - j - 1];
            A[N - i - 1][N - j - 1] = A[j][N - i - 1];
            A[j][N - i - 1] = temp;
            }
        }
        
        for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++) {
            printf("%d ", A[i][j]);
            }
        printf(" ");
        printf("\n");
        }
        c=k;
        if(c%2==0){
            for(j=0;j<N;j++){
                bp=bp+A[N-1][j];
            }
        c=k;    
        }
        if(c%2!=0){
            for(j=0;j<N;j++){
                ap=ap+A[N-1][j];
            }
        }
        printf("betül:%d",bp);
        printf("ayşe=%d",ap);
        printf("\n");
    }

    if(ap>bp){
        printf("ayşe kazandi.");
    }
    else{
        printf("betül kazandı.");
    }

    return 0 ;
}