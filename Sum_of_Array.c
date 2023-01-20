#include<stdio.h>
int main(){int N;scanf("%d",&N);int a[N],i,sum=0;for(i=0;i<=N-1;i++){scanf("%d",&a[i]);}for(i=0;i<=N-1;i++){sum=sum+a[i];}printf("%d ",sum);}