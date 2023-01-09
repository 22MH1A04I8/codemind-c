#include<stdio.h>
int main()
{
    int i,t;
    scanf("%d",&t);
    for(i=1;i<=12;i++)
    {
        printf("%d x %d = %d
",t,i,t*i);
    }
}