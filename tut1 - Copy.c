#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the first number");
    scanf("%d",&a);
    printf("enter the second number");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("%d\n%d",a,b);
}