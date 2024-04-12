// // #include<stdio.h>
// // int main()
// // {
// //     //declaration
// //     int a,b,c;

// //     printf("enter value of a :");
// //     scanf("%d",&a);
// //     printf("enter the value of b :");
// //     scanf("%d",&b);
// //     printf("enter the value of c :");
// //     scanf("%d",&c);

// //     //condition to check which is greater
// //     if(a>b)
// //     {
// //         if(a>c)
// //         {
// //             printf("a  is greator  ");
// //         }
// //         else
// //         {
// //             printf("c is greator ");
// //         }
// //     }
// //     else
// //     {
// //         if(b>c)
// //         {
// //             printf("b is greator ");
// //         }
// //         else
// //         {

// //                 printf("c is greator");

// //         }
// //     }
// //     return 0;
// // }

// #include<stdio.h>
// int main()
// {

//     int a,b,c;
//     printf("enter the a :");
//     scanf("%d",&a);
//     printf("enter the b :");
//     scanf("%d",&b);
//     printf("enter the c :");
//     scanf("%d",&c);

//     if(a>b)
//     {
//         if(a>c)
//         {
//             printf("a is greator %d",a);
//         }
//         else
//         {
//             printf("c is greator %d",c);
//         }
//     }
//     else
//     {
//         if(b>c)
//         {
//             printf("b is greator %d",b);
//         }
//         else
//         {
//             printf("c is greator %d",c);
//         }
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter the a :");
    scanf("%d", &a);
    printf("enter the b :");
    scanf("%d", &b);
    printf("enter the c :");
    scanf("%d", &c);

    if (a > b && a > c)
    {
        printf("a is greator %d", a);
    }
    if (b > c && b > a)
    {
        printf("b is greator %d", b);
    }
    if (c > a && c > b)
    {
        printf("c is greator %d", c);
    }
    return 0;
}