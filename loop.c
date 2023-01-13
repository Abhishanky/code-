// #include<stdio.h>
// int main()
// {
//     int i=0;
//     while(i<=100)
//     {
//         if(i >= 1)
//     {
//     printf("the value of i is %d\n",i);
//     }
//     ++i;
//     }
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int i,n;
//     printf("odd number\n");
//     scanf("%d",&n);
//     for(i=1; i<=n; i++)
//     {
//         if(i%2!=0)
//         {
//             printf("%d\n",i);
//         }
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {   int i,j;
//     for(i=5; i>=1; i--)
//     {
//         for(j=1; j>=i; j--)
//         {
//             printf("%d",&j);
//         }
//     }
//     return 0;


// #include<stdio.h>
// int main()
// {
//  int i,n;
//  printf("enter no:");
//  scanf("%d",&n);
//  for(i=1; i<=n; i++)
//  {
//     printf("%d\n",i);
//  }
//  return 0;
// }


// #include<stdio.h>
// int main()
// {
    
//     int i,sum=0;
//     for (i=1;i<=10;i++)
//     {
//         sum=sum+i;
//     }
//     printf("%d",sum);

//}

// #include<stdio.h>
// int main()
// {
//     int i,sum;
//     for(i=1; i<=100; i++)
    
//     {
//         if(i%2==0)
//         {
//         sum=sum+i;
//         }
//     }
//     print("%d",sum);
// }


// #include<stdio.h>
// int main()
// {
//     int i,n;
//     printf("enter the number:");
//     scanf("%d",&n);
//     for(i=1; i<=10; i++)
//     {
//         printf("%d * %d = %d\n",n,i,i*n);
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int i,cube;
//     printf("enter number:");
//     scanf("%d",&cube);
//     for(i=1; i<=cube; i++)
//     {
//         printf("%d*%d = %d\n ",i,i, (i*i*i));
//     }
//     return 0;


// }


// #include<stdio.h>
// int main()
// {
//     int i,j,n;
//     printf("enter the number\n");
//     scanf("%d",&n);
//     for(i=1; i<=10; i++)
//     {
//         for(j=20; j<=25; j++)
//         {
//             printf("%d*%d=%d     ",j,i,(i*j));
//         }
//         printf("\n");
//     }
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int i=1;
//     int n;
//     printf("enter the number:");
//     scanf("%d",&n);
//     while(i<=n)
//     {
//         printf("%d\n",i);
//         i++;
//     }
// }

//  #include<stdio.h>
//   int main()
//   {
      
//       int n; 
//       printf("enter any number:");
//       scanf("%d",&n);
//       while(n>=1)
//       {
//           printf("%d\n",n);
//           n--;
//       }
//   }

// #include<stdio.h>
//  int main()
//  {
//      char c,a=0,z=0;
//      printf("enter any alphabets\n");
//      while(c<=a&&c>=z)
//      {
//          printf("%c\n",c);
//       c++;
//      }
//      return 0;
//  }

// #include<stdio.h>
// int main()
// {
//     int num;
//     int sum=0;
//     printf("enter a num:");
//     scanf("%d",&num);
//     for(sum=1; sum<=num; sum++);
//     {
//         if(num%2==0)
//         {
//             sum=sum+num;
//         }
//         printf("%d",sum);
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int i=0,num;
//     printf("enter the number:");
//     scanf("%d",&num);
//     do
//     {
//         i++;
//         num/=10;
//         }    while(num!=0);
//         printf("%d",i);
    
//     return 0;
// }

//  #include<stdio.h>
//  int main()
//  {
//      int num,first,last;
//      printf("enter the num:");
//      scanf("%d",&num);
//       first=num%=10;
//      do
//      {
//          last=num/=10;
        
//      }
//      while(num>=9);
//      printf("%d%d",first,last);
//      return 0;
//  }


// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     int num,a,b=0,c,d,reverse=0;
//     printf("Enter the no:");
//     scanf("%d",&num);
//     c=num;    //123
//     while (num!=0)
//     {
//         reverse=( reverse*10 + num%10);  //reverse=0*10 +3=3 //reverse=3*10+2=32//reverse=32*10+1=321
//         num=num/10;//12//1//0

//     }
//     if (c==reverse)
//     printf("palindrome");
//     else
//     printf("not palindrome");
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int i,j=1,k=2;
//     for(i=1; i<=15; i++);
//     {
//         printf("%d",j);
//         j=j+1;
//         printf("%d",k);
//         k=k+2;
//         printf("%d",k);
//         k=k+3;
//     }
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//  int x;
//  printf("enter num:");
//  scanf("%d",&x);
//  switch(x!=0)
//  {
//   case 1:
//   printf("even");
//   break;
//   default:
//   printf("odd")
//  }
// }


// #include<stdio.h>
// int main()
// {
//   int n,i,count;
//   printf("enter any number:");
//   scanf("%d",&n);
//   for(i=1; i<=n; i++)
//   {
//     if(n%i==0)
//     {
//         count++;
//     }
//   }
//   if(count==2)
//   printf("prime number");
//   else
//   printf("not");
//   return 0;
// }


#include<stdio.h>
int main()
{
    int a,num,reverse=0;
    printf("enter any number");
    scanf("%d",&num);
    a=num;
    while(num!=0)
    {
        reverse=(reverse*reverse*reverse + num%10);
        num=num%10;
    }
    if(a==reverse)
    printf("arm");
    else
    printf("not");
    return 0;
}