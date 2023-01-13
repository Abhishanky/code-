#include<stdio.h>
int main()
{
    int i=0,n;
    printf("enter the value of n\n");
    scanf("%d",&n);
    do
    {
        printf("the no. is %d\n",i+1);
    }
    while(i<n);
    return 0;
}