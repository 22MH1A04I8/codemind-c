#include<stdio.h>
int main()
{
    float b,pf,da,hra,gs;
    scanf("%f%f%f",&b,&da,&hra);
    pf=(b*12)/100;
    gs=pf+da+hra+b;
    printf("%0.2f
%0.2f",pf,gs);
}