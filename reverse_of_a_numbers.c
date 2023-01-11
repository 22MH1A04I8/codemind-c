#include<stdio.h>
int main()
{
    int num,rev,rem;
    scanf("%d",&num);
    for(rev=0;num!=0;num=num/10)
    {
        rem=num%10;
        rev=rev*10+rem;
        
    }
    printf("%d",rev);
    
}