// #include<stdio.h>
// int main()
// {
//     int i,j,space,rows;
//     printf("enter the rows:");
//     scanf("%d",&rows);
//     for(i=rows; i>=1; i--)
//     {
//         for(space=1; space<=(rows-i); space++)
//         {
//             printf(" ");
//         }
//         for(j=1; j<=2*i-1; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }
#include<stdio.h>
int main()
{
    int i,j,space,rows;
    printf("enter the rows:");
    scanf("%d",&rows);
    for(i=1; i<=rows; i++);
    {
        for(space=1; space<=rows-i; space++)
        {
            printf(" ");
        }
        for(j=1; j<=2*i-1; j++);
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}