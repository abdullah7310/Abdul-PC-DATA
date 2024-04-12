#include<stdio.h>
int main()
{
    int n;
    printf("enter the number >>");
    scanf("%d",&n);
    if(n%4==0)
    {
        int increament;
        increament=n+1;
        printf("final value is >> %d \n",increament);
    }else
    {
        int decreament;
        decreament=n-1;
        printf("final value is >> %d \n",decreament);
    }
    return 0;
}