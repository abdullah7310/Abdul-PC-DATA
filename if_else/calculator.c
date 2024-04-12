#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a >> ");
    scanf("%d",&a);
    printf("enter b >>");
    scanf("%d",&b);
    char operator;
    printf("enter the operator>>");
    scanf(" %c",&operator);
    if(operator=='+')
    {
        int sum;
        sum=a+b;
        printf("sum is >> %d \n",sum);
    }else if(operator=='-')
    {
        int sub;
        sub=a-b;
        printf("subtract is >> %d \n",sub);
    }else if(operator=='*')
    {
        int mult;
        mult=a*b;
        printf("multiple is >> %d \n",mult);
    }else if(operator=='/')
    {
        int div;
        div=a/b;
        printf("quotient is >> %d\n",div);
    } else
    {
        printf(" invalid operator");
    }
    return 0;
}