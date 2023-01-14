#include<stdio.h>
int max(int *a,int n)
{
    int maxium=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>maxium)
        {
            maxium=a[i];
        }
    }
    return maxium;
}
int main()
{
    int n,k;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    int ma=max(a,n);
    for(int i=0;i<n;i++)
    {
        if(a[i]+k>=ma)
        {
            printf("True ");
        }
        else
        {
            printf("False ");
        }
    }
}