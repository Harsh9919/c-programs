#include<stdio.h>
void main()
{
    int a,b;
    char c;
    printf("enter two number");
    scanf("%d%d",&a,&b);

    printf("enter '+' for addition, enter '-' for subtraction, enter '*' for multiplication, enter '/' for division");
    scanf(" %c",&c);
    if(c=='+'){printf("%d + %d = %d",a,b,(a+b));}
    else if(c=='-'){printf("%d - %d = %d",a,b,(a-b));}
    else if(c=='*'){printf("%d * %d = %d",a,b,(a*b));}
    else if(c=='/'){printf("%d / %d = %d",a,b,(a/b));}
    else{printf("invalid");}
}
