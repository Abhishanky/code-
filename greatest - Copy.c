#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the first value");
    scanf("%d",&a);
    printf("enter the second value");
    scanf("%d",&b);
    printf("ener the third number");
    scanf("%d",&c);
    if( (a>b)&&(a>c) )
    {
        printf("a is greatest");
    }
    if( (b>a)&&(b>c) )
    {
        printf("b is greatest");
    }
    else
    {
        printf("c is greatest");
    }
}