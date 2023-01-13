#include<stdio.h>
void main()
{
    int a[5],b[5],c[5],i;
    for(i=0; i<4; i++)
    {
        printf("enter first number=");
        scanf("%d",&a[i]);
    }
    for(i=0; i<4; i++)
    {
        printf("enter the seconf number=");
        scanf("%d",&b[i]);
    }
    for(i=0; i<4; i++)
    {
        c[i]=a[i]+b[i];
        ptintf("%d",c[i]);
    }
}
