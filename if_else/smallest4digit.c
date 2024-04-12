#include<stdio.h>
int main()
{
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    if(n>999)
    {
       if(n<=1000)
       {
        printf("it is the smallest 4 digit number");
       } else
       {
        printf("not smallest 4 digit number");
       }
    }else{
        printf("not smallest 4 digit");
    }
    return 0;
}