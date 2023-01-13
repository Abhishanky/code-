// #include<stdio.h>
// #include<string.h>
// void main()
// {
//     char a[25]="hello";
//     int x;
//     x=strlen(a);
//     printf("length of string=%d",x);
// }

// #include<stdio.h>
// #include<string.h>
// void main()
// {
//     char a[25]="hello";
//     int x;
//     x=strnlen(a,4);
//     printf("length of string=%d",x);
// }


// #include<stdio.h>
// #include<stdio.h>
// void main()
// {
//     char a[25]="hello";
//     char b[25];
//     strcpy(b,a);
//     printf("first string=%s\n",a);
//     printf("scound string=%s\n",b); 
// }

// #include<stdio.h>
// #include<stdio.h>
// void main()
// {
//     char a[25]="shyam";
//     char b[25];
//     b = strrev (a);
//     printf("reverse string=%s\n",b);
// }

// wap in c to take a string  and print  it.

// #include<stdio.h>
// #include<string.h>
// void main()
// {
//     char a[100]="i am shyam parashar";
//     printf("%s",a);
// }


// wap in c to take two strings and concatinate them.

// #include<stdio.h>
// #include<string.h>
// void main()
// {
//     char a[100]="shyam";
//     char b[100]="parashar";
//     puts(a);
//     strcat(a,b);
//     puts(b);
// }

// #include<stdio.h>
// #include<stdio.h>
// void main()
// {
//     char a[100]="shyam";
//     puts(a);
//      int x;
//      x=strlen(a);
//      printf("the length of =%d",x);
// }

// #include<stdio.h>
// #include<string.h>
// void main()
// {
//     char a[100]="shyam";
//      strrev(a);
//      printf("The value after reversing the string=%s",a);
// }

// #include<stdio.h>
// #include<string.h>
// void main()
// {
//     char a[100];
//     char b[100];
//     scanf("%[^\n]s",a);
//     puts(a);
// }

// wap in c pro to take a string and count number of vowels in it using loop.

#include<stdio.h>
#include<string.h>
void main()
{
    char a[10];
    printf("enter any aplha:");
    fgets(a,10,stdin);
    int i,c=0;
    for(i=0; a[i]!='\0'; i++)
    {
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
        {
            c++;
        }
    }
    printf("%d\n",c);
}


// wap in c to take a string from user and count of words in it.