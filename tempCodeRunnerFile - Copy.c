#include<stdio.h>
int main()
{
    int i,j;
    for(i=1; i<=7; i++)
    {
        for(j=1; j<=7; j++)
        {
            if( i==4 || j==4  || (i==1&&j>4) || (j==7&&i>4) || (i==7&&j<4) || (j==1&&i<4) )
            {
                printf("* ",j);
            }
            else
            {
                printf(" ");
            }
          printf("\n");
        }
    }
    return 0;


}