#include<stdio.h>
int main()
{
    float n1,n2,n,avg;
    scanf("%f%f",&n1,&n2);
    n=n1+n2;
    avg=n/2;
    printf("Average of %.f and %.f is: %.2f",n1,n2,avg);
}