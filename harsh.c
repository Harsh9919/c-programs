#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a and b= ");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a=%d\n b=%d",a,b);
}