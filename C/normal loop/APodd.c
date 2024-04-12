// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("enter the number :");
//     scanf("%d",&n);
//     for(int i=1;i<=2*n-1;i=i+2){
//         printf("%d \n",i);
//     }
//     return 0;
// }




// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("enter the number :");
//     scanf("%d",&n);
//     for(int i=4;i<=3*n+1;i=i+3){
//         printf("%d \n",i);
//     }
//     return 0;
// }



#include<stdio.h>
int main()
{
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    int a=3;
    for(int i=1; i<=n; i=i+1){
        printf("%d \n",a);
        a=a+2;
    }
    return 0;
}