// #include<stdio.h>
// int main()
// {
//     int num,i=0;
//     printf("enter the number:");
//     scanf("%d",&num);
//     while(num>=i)
//     {
//         printf("%d\n",i);
//         i++;
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int num,i=1;
//     printf("enter the num");
//     scanf("%d",&num);
//     while(num>=1)
//     {
//         printf("%d\n",num);
//         num--;
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     char c='a';
//     while(c<='z')
//     {
//         printf("%c\n",c);
//         c++;
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     char c='z';
//     while(c>='a')
//     {
//         printf("%c\n",c);
//         c--;
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int num,i=1;
//     printf("enter the number");
//     scanf("%d",&num);
//     while(num>=i)
//     {if(i%2==0)
    
//         printf("%d\n",i);
//         i++;
//     }
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int i=1,n,sum=0;
//     printf("enter the number");
//     scanf("%d",&n);
//     while(n>=i)
//     {
//         sum=sum+i;
//         i++;
//     }
//     printf("%d",sum);
    
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int i=1,n,sum=0;
//     printf("enter the number");
//     scanf("%d",&n);
//     while(n>=i)
//     {
//         if(i%2==0)
//         sum=sum+i;
//         i++;
//     }
//     printf("%d",sum);
    
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int n,i=1;
//     printf("enter ant number:");
//     scanf("%d",&n);
//     for(i=1; i<=10; i++)
//     {
//         printf("%d*%d=%d\n",n,i,n*i);
//     }
//     return 0;

// }


// 
// #include<stdio.h>
// int main()
// {
//     int num,i=0,a,b,c;
//     printf("enter the number:");
//     scanf("%d",&num);
//    do
//    {
//     i++;
//     num/=10;
//    }  while(num!=0);
//    printf("%d",i);
//     return 0;

// }



// #include<stdio.h>
// int main()
// {
//     int num,i=0;
//     printf("enter the number:");
//     scanf("%d",&num);
//     while(num!=0)
//     {
//         num/=10;
//         i++;
//     }
//     printf("%d",i);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int num,first,last;
//     printf("enter the numer\n");
//     scanf("%d",&num);
//     first=num%10;
//     do
//     {
//       last=num/=10;
//     }
//     while(num>=9);
//     printf("first%d last%d\n",first,last);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int a=1,b=2,c;
//     b=b-a;
//     a=a+b;
//     printf("%d\n%d",b,a);
//     return 0;
// }



// #include<stdio.h>
// int main(){
// int a,b;
// scanf("%d",&a);
// if(a & 1){
// printf("set %d lsb",a);
// }
// else {
//     printf("not %d lsb",a);
// }
// return 0;
// }



// #include<stdio.h>
// int main(){
//     int x=1;
//     if(!!x)
//     printf(" x= %d",!x);
//     else printf("%d x=",x);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int a;
//     scanf("%d",&a);
//     switch(a%2)
//     {
//     case 0: printf("even");
//     break;
//     case 1: printf("odd");
//     }
// }


#include<stdio.h>
int main()
{
    int i,j;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}












   



















