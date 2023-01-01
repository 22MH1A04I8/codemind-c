#include<stdio.h>
int main()
{
    int a,minute,hour;
    scanf("%d",&a);
    minute=a%60;
    hour=a/60;
    printf("%d Hour(s) %d Minute(s)",hour,minute);
}