// #include<stdio.h>
// int main()
// {
//     int a,b,c,d;
//     printf("enter the value of a : ");
//     scanf("%d",&a);
//     printf("enter the value of b :");
//     scanf("%d",&b);
//     printf("enter the value of c :");
//     scanf("%d",&c);
//     printf("enter the value of d  :");
//     scanf("%d",&d);
//     if(a==b)
//     {
//         if(b==c)
//         {
//             if (c==d)
//             {
//                 printf("its a square");
//             } else
//             {
//                 printf("not a square");
//             }
//         } else
//         {
//             printf("not a square");
//         }
//     }else
//     {
//         printf("not a square");
//     }

//     return 0;
// }
// 


#include<stdio.h>
int main ()
{
    int length,width;
    printf("enter the length :\n");
    scanf("%d",&length);
    printf("enter the width :\n");
    scanf("%d",&width);
    if(length==width)
    {
        printf("square");
    }else
    {
        printf("rectangle");
    }
    return 0;
}