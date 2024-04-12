#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the value of >>");
    scanf("%d",&a);
    printf("enter the value of >>");
    scanf("%d",&b);
    int sum=a+b;
    if(sum>=15 && sum<=20)
    {
        printf("the output :%d \n",20);
    }else{
        printf("the output :%d \n",sum);
    }
    return 0;

}