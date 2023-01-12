#include<stdio.h>
int main()
{
    int i,ni;
    scanf("%d",&ni);
    for(i=1;i<=ni;i++)
    {
        int q,r,n,s=0;
        scanf("%d",&n);
        q=n;
        while(n>0)
        {
            r=n%10;
            s=s*10+r;
            n=n/10;
        }
        if (s==q)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }}}