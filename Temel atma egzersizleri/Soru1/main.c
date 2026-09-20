#include<stdio.h>
int main(){
int arr[6]={3,6,8,9};
int x=0;
int y=1;
x=arr[y++]+(arr[y++]=2);
arr[5]=arr[y+1]+x;
printf("%d-%d-%d",x,y, arr[5]); return 0;
}