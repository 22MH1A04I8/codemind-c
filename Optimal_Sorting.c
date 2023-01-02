#include<stdio.h>
#include<limits.h>
int main()
{
    int t,c=0;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        for(int k=1;k<n;k++)
        {
            if(arr[k-1]>arr[k])
            {
                c++;
            }
        }
        if(c==0)
        {
            printf("%d",c);
        }
        else
        {
        int min=INT_MAX,max=INT_MIN;
        for(int I=0;I<n;I++)
        {
           if(min>arr[I])
           {
             min=arr[I];
           }
           if(max<arr[I])
           {
               max=arr[I];
           }
        }
        printf("%d
",max-min);
        }
    }
}