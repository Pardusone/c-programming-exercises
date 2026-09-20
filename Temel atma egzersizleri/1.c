#include<stdio.h>
int main(){
int a[10] {0}; =
int i,j,N = 3;
for(i=1;i<=N;i++){
for(j=1;j<=N;j++){
if(i%j==0) a[j-1] = ((a[j-1] % 2) == 0);
} for(j=0;j<N; j++) printf("%d ",a[j]); printf("\n");
}
}
