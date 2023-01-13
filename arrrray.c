
//wap in c to find largest value in array

// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("enter an array size:");
//     scanf("%d",&n);
//     int a[n],i,max=0;
//     for(i=0; i<n; i++)
//     {
//         printf("enter an array:");
//         scanf("%d",&a[i]);
//     }
//     for(i=0; i<n; i++)
//     {
//         if(a[i]>max)
//         {
//             max=a[i];
//         }
//     }
//     printf("%d",max);
//     return 0;

// }

// wap in c to find min value in c


// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("enter an array size:");
//     scanf("%d",&n);
//     int a[n],i,min;
//     for(i=0; i<n; i++)
//     {
//         printf("enter an array:");
//         scanf("%d",&a[i]);
//     }
//     for(i=0; i<n; i++)
//     {
//         if(a[i]<min)
//         {
//             min=a[i];
//         }
//     }
//     printf("%d",min);
//     return 0;
// }


//ascending shorting


// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("enter array sixe:");
//     scanf("%d",&n);
//     int a[n],i,j,temp;
//     for(i=0; i<n; i++)
//     {
//         printf("enter an array:");
//         scanf("%d",&a[i]);
//     }
//     for(i=0; i<n; i++)
//     {
//         for(j=i+1; j<n; j++)
//         {
//             if(a[i]>a[j])
//             {
//                 temp=a[i];
//                 a[i]=a[j];
//                 a[j]=temp;
//             }
//         }
//     }
//     for(i=0; i<n; i++)
//     {
//         printf("%d",a[i]);
//     }
//     return 0;
// }


// descending shorting


// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("enter array sixe:");
//     scanf("%d",&n);
//     int a[n],i,j,temp;
//     for(i=0; i<n; i++)
//     {
//         printf("enter an array:");
//         scanf("%d",&a[i]);
//     }
//     for(i=0; i<n; i++)
//     {
//         for(j=i+1; j<n; j++)
//         {
//             if(a[i]<a[j])
//             {
//                 temp=a[i];
//                 a[i]=a[j];
//                 a[j]=temp;
//             }  
//         }
//     }
//     for(i=0; i<n; i++)
//     {
//         printf("%d",a[i]);
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("enter an array size:");
//     scanf("%d",&n);
//     int a[n],i;
//     for(i=0; i<n; i++)
    
//         printf("enter array:");
//         scanf("%d",&a[i]);
    
//     int ele,f=0;
//     for(i=0; i<n; i++)
      
//        printf("enter any element:");
//        scanf("%d",&ele);
      
//      for(i=0; i<n; i++)
//      if(ele==a[i])
//      {
//         printf("%dposition",i);
//         f++;
//      }
//      return 0;
// }


//transpose in array.

// #include<stdio.h>
// int main()
// {
//     int a[2][3],i,j;
//     for(i=0; i<2; i++)
//     {
//         for(j=0; j<3; j++)
//         {
//             printf("enter any eliment=");
//             scanf("%d",&a[i][j]);
//         }
//     }
//     for(i=0; i<3; i++)
//     {
//         for(j=0; j<2; j++)
//         {
//             printf("%d\t",a[j][i]);
//         }
//         printf("\n");
//     }
//     return 0;
// }



//shortine in rrY .


// #include<stdio.h>
// int main()
// {
//     int a[100],n,i,j,temp;
//     printf("enter the size of array=");
//     scanf("%d",&n);
//     for(i=0; i<n; i++)
//     {
//             printf("enter the aliment of an array=");
//             scanf("%d",&a[i]);
    
//     }
//     for(i=0; i<n; i++)
//     {
//         for(j=i+1; j<n; j++)
//         {
//         if(a[i]<a[j])
//          {
//             temp=a[i];
//             a[i]=a[j];
//             a[j]=temp;
//          }

//         }
//     }
//     for(i=0; i<n; i++)
//     {
//         printf("%d",a[i]);
//     }
//     return 0;
// }
  

  // insrtion--------------

//    #include<stdio.h>
//   int main()
//   {
//     int a[100],n,i,pos,ele;
//     printf("enter size of an array:");
//     scanf("%d",&n);
//     for(i=0; i<n; i++)
//     {
//         printf("enter the elemnet of an array:");
//         scanf("%d",&a[i]);
//     }
//     printf("enter any position of the array=");
//     scanf("%d",&pos);
//     printf("enter any insert value=");
//     scanf("%d",&ele);
//     for(i=n; i>=pos; i--)
//     {
//         a[i]=a[i-1];
//     }
//     a[pos]=ele;
//     n++;
//     printf("result after insurting:");
//     for(i=0; i<n; i++)
//     {
//         printf("%d",a[i]);
//     }
//     return 0;
//   }



//delet array element.

// #include<stdio.h>
// int main()
// {
//     int a[100],n,i,pos;
//     printf("enter size of array=");
//     scanf("%d",&n);
//     for(i=0; i<n; i++)
//     {
//         printf("enter any element=");
//         scanf("%d",&a[i]);
//     }
//     printf("enter position=");
//     scanf("%d",&pos);
//     for(i=pos-1; i<n; i++)
//     {
//         a[i]=a[i+1];
//     }
//     for(i=0; i<n-1; i++)
//     {
//         printf("%d ",a[i]);
//     }
//    return 0;
// }
54
  













