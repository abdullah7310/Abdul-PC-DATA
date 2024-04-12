#include<stdio.h>
int main()
{
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    if(n>=1000)
    {
        if(n<10000)
        {
            if(n%7==0)
            {
                int b;
                b=n/7;
                if(b%2==0)
                {
                    printf("yes");
                }else{
                    printf("no");
                }
            }else{
                printf("no");
            }
        }else{
            printf("no");
        }
    }else{
        printf("no");
    }
    return 0;
}