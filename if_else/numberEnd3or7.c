#include<stdio.h>
int main()
{
    int n;
    printf("enter the number :~");
    scanf("%d",&n);
    int lastDigit;
    lastDigit=n%10;
    if(lastDigit==3)
    {
        printf("last digit is :~3 \n");
    }
    else if(lastDigit==7)
    {
        printf("last digit is :~7 \n");
    }else
    {
        printf(" don't match any of them : %d \n",n);
    }
    return 0;
}