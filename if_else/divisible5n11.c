#include<stdio.h>
int main()
{
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    if(n%5==0)
    {
        if(n%11==0)
        {
            printf("divisible by both 5&11");
        }else
        {
            printf("divisible by 5 only");
        }
    }else if(n%11==0)
    {
        printf("divisible by 11");
    }
    return 0;
}