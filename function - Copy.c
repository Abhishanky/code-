// wap to print add  two numbers by using function

// #include<stdio.h>
// void add()
// {
//     int a,b,c;
//     printf("enter a first num:");
//     scanf("%d",&a);
//      printf("enter a second num:");
//     scanf("%d",&b);
//     c=a+b;
//     printf("%d add",c);
// }
// void main()
// {
//     add();
// }

//wap a program in c square of value

// #include<stdio.h>
// void square()
// {
//     int a,squ;
//     printf("enter a number:");
//     scanf("%d",&a);
//     squ=a*a;
//     printf("%d square:",squ);
// }
// void main()
// {
//     square();
// }


// wap in c to printf factorial

// #include<stdio.h>
// void factor()
// {
//     int fact=1,n,i;
//     printf("enter any number:");
//     scanf("%d",&n);
//     for(i=1; i<=n; i++)
//     {
//         fact=fact*i;
//     }
//     printf("%d\n",fact);
// }
// void main()
// {
//     factor();
// }


//wap in c to calculate x^n without usinglibrary pow function by using define function.
// #include<stdio.h>
// void power()
// {
//     int ex,num=1,a;
//     printf("enter base num:");
//     scanf("%d",&a);
//     printf("enter exponational num:");
//     scanf("%d",&ex);
//     while(ex>0)
//     {
//         num=num*a;
//         ex=ex-1;
//     }
//     printf("%d",num);
// }
// void main()
// {
//     power();
// }



//program us by call by value


// #include<stdio.h>
// void mul(int x,int y)
// {
//   int mul;
//   mul=x*y;
//   printf("%d",mul);
// }

// void main()
// {
//     int a,b;
//     printf("enter a num:");
//     scanf("%d",&a);
//     printf("enter a num:");
//     scanf("%d",&b);
//     mul(a,b);
    
// }

// #include<stdio.h>
// void swap(int a,int b)
// {
//   a=a+b;
//   b=a-b;
//   a=a-b;
//   printf("%d%d",a,b);
//   printf("\n");
// }
// void main()
// {
//   int x,y;
//   printf("enter the first num:");
//   scanf("%d",&x);
//   printf("enter the second num:");
//    scanf("%d",&y);
//    swap(x,y);
// }


// #include<stdio.h>
// void check( int a,int b,int c)
// {
//   if(a>b && a>c)
//   {
//     printf("a is gratest:");
//   } 
//   else if(b>c && b>a)
//   {
//     printf("b is gratest:");
//   }
//   else
//   {
//     printf("c is gratest:");
//   }
// }
//   void main()
//   {
//   int x,y,z;
//   printf("enter the first number");
//   scanf("%d",&x);
//   printf("enter the second number");
//   scanf("%d",&y);
//   printf("enter the third number");
//   scanf("%d",&z);
//   check(x,y,z);
//   }


// #include<stdio.h>
// void meal()
// {
//    float n,mc1,mc2,total;
//    printf("enter a number:");
//    scanf("%f",&n);
//    mc1=n*20/100;
//    printf("first 20 per meal cost %f\n",mc1);
//    mc2=n*50/100;
//    printf("second 50 per meal coast %f\n",mc2);
//    total=n+mc1+mc2;
//    printf("tatal bill=%f\n",total);
// }
// void main()
// {
//     meal();
// }


// #include<stdio.h>
// void eo(int n)
// {
//     if(n%2==0)
//     printf("even");
//     else
//     printf("odd");
// }
// void main()
// {
//     int x;
//     printf("enter a number=");
//     scanf("%d",&x);
//     eo(x);
// }

// #include<stdio.h>
// void power(int a,int b)
// {
//     int c=1;
//     for(int i=1; i<=b; i++)
//     c=c*a;
//     printf("%d",c);
// }
// void main()
// {
//     int x,y;
//     printf("enter base number:");
//     scanf("%d",&x);
//     printf("enter exponational num:");
//     scanf("%d",&y);
//     power(x,y);
// }

// #include<stdio.h>
// void check(char c)
// {
    
    
//     if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
//     {
//         printf("alphabets:");
//     }
//     else if(c>='0'&& c<='9')
//     {
//         printf("digit:");
//     }
//     else
//     {
//         printf("special charechter:");
//     }
// }
// void main()
// {
//     char s;
//     printf("enter any key=");
//     scanf("%c",&s);
//     check(s);
// }


// #include<stdio.h>
// void check(int n)
// {
//     if(n>0)
//     {
//         printf("positive=");
//     }
//     else if(n<0)
//     {
//         printf("negative=");
//     }
//     else
//     {
//         printf("zero=");
//     }
// }
// void main()
// {
//     int x;
//     printf("enter any num:");
//     scanf("%d",&x);
//     check(x);
// }


// #include<stdio.h>
// void check(int week)
// {
//     if(week==1)
//     printf("monday");
//     else if(week==2)
//     printf("tuesday");
//     else if(week==3)
//     printf("wed");
//     else if(week==4)
//     printf("thurs");
//     else if(week==5)
//     printf("fri");
//     else if(week==6)
//     printf("saturday");
//     else
//     printf("not week:");

// }
// void main()
// {
//     int w;
//     printf("enter week 1 to 7=");
//     scanf("%d",&w);
//     check(w);
// }

#include<stdio.h>
void per(int marks,int per )
{
   marks=c+m+p;
   per=marks/3;

}
void main()
{
    int c,m,p,marks;
    printf("enter chemistry number");
    scanf("%d",&c);
    printf("enter math number");
    scanf("%d",&m);
    printf("enter physics number");
    scanf("%d",&p);
    per(marks,per);

}