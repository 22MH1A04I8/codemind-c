#include<stdio.h>
int main(){int n,i,s=0,p,c=0;scanf("%d",&n);int a[n];for (i=0;i<n;i++){scanf("%d",&a[i]);s=s+a[i];}p=s/n;for (i=0;i<n;i++){if(p>=a[i]){c++;}}printf("%d",c);}

