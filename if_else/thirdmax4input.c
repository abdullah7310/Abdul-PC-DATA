// #include<stdio.h>
// int main ()
// {
//     int a,b,c,d,e;
//     printf("enter the number a :");
//     scanf("%d",&a);
//     printf("enter the number of b :");
//     scanf("%d",&b);
//     printf("enter the number of c :");
//     scanf("%d",&c);
//     printf("enter the number of d :");
//     scanf("%d",&d);
//     printf("enter the number of e  :");
//     scanf("%d",&e);
//     int tmax;
//     if(a>=b && a>=c  && a>=d && a>=e)
//     {
//         if(b>=c && b>=d && b>=e)
//         {
//             if(c>=d && c>=e)
//             {
//                 tmax=c;
//                 printf("third max is : %d\n",tmax);
//             }else
//             {
//                 if(d>=c && d>=e)

//                 {
//                     tmax=d;
//                     printf("third max is :%d \n",tmax);
//                 }else{
//                     tmax=e;
//                     printf("third max is :%d\n",tmax);
//                 }
//             }
//         }else if (c>=b &&  c)
//     }
// }



#include<stdio.h>
 int main ()
 {

    int a,b,c,d;
    printf("Enter a number :");
    scanf("%d", &a);
    printf("Enter a number :");
    scanf("%d", &b);
    printf("Enter a number :");
    scanf("%d", &c);
    printf("Enter a number :");
    scanf("%d", &d);

    int max=0,smax=0,tmax=0;

//     if (a > b)
//     {
//         max=a;
//         smax=b;

//     }
//     else 
//     {
//         max =b;
//         smax=a;
//     }
 
//     if (max > c)
//     {
//         if (smax > c)
//         {
//             tmax=c;
//             smax=smax;
            
//         }
//         else
//         {
//             tmax=smax;
//             smax=max;
        
        
//         }
//         }
//         else
//         {
//             tmax=smax;
//             smax=max;
//             max=c;

//         }
    
//      if (max > d)
//     {
//         if (smax > d)
//         {
//             if (tmax < d)
//             {
//                 tmax=d;
//             }
//         }
//         else 
//         {
//             tmax=smax;
//             smax=d;
//         }
//     }
//     else
//     {
//         tmax=smax;
//         smax=max;
//         max=d;

//     }
//     printf("Third max :%d", tmax);

    if(a>b)
    {
        max=a;
        smax=b;
    }else 
    {
        max=b;
        smax=a;
    }
    if(max>c)
    {
        if(smax>c)
        {
            tmax=c;
            smax=smax;
        }else
        {
            tmax=smax;
            smax=c;
        }
    }else
    {
        max=c;
        smax=max;
        tmax=smax;
    }
    if(max>d)
    {
        if(smax>d)
        {
            if(tmax>d)
            {
                tmax=tmax;
            }else
            {
                tmax=d;
            }
        }else
        {
            smax=d;
            tmax=smax;
        }
    }else
    {
        max=d;
        smax=max;
        tmax=smax;
    }
printf("third max :%d \n",tmax);
    return 0;
    
 }
