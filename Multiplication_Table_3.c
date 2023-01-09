#include<stdio.h>
int main()
{
    int i,t,min,max;
    scanf("%d%d%d",&t,&min,&max);
    for(i=min;i<=max;i++)
    {
        printf("%d x %d = %d
",t,i,t*i);
    }
}