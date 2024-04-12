// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("enter the number :");
//     scanf("%d",&n);
//     int F=1;
//     int i=1;
//     while(i<=n){
//         F=F*i;
//         i++;
//     }
//     printf("the factorial is :%d",F);
//     return 0;
// }


#include<stdio.h>
int main()
{
    int  n;
    printf("enter the number :");
    scanf("%d",&n);
    int f=1;
    int i=1;
    while(i<=n){
        f=f*i;
        i++;
        printf("factorial is %d :%d\n",i,f);
    }
    return 0;

}