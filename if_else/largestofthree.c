#include<stdio.h>
int main()
{
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    if(n<1000)
    {
        if(n>=999)
        {
            printf("number is largest 3 digit");
        } else{
            printf("number is not largest 3 digit");
        }
    }else{
        printf("not largest 3 digit");
    }
    return 0;
}