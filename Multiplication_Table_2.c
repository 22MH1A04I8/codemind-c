#include<stdio.h>
int main()
{
    int i,t,max;
    scanf("%d%d",&t,&max);
    for(i=1;i<=max;i++)
    {
        printf("%d x %d = %d
",t,i,t*i);
    }
}