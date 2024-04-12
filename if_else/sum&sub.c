#include<stdio.h>
int main()
{

    int first_number,second_number;
    printf("enter the first number :~");
    scanf("%d",&first_number);
    printf("enter the second number :~");
    scanf("%d",&second_number);
    if(first_number>second_number)
    {
        int sub;
        sub=first_number-second_number;
        printf("subtractt is >> %d  \n",sub);
    } else
    {
        int sum;
        sum=first_number+second_number;

        printf("sum is >> %d \n",sum);
    }
    return 0;
}