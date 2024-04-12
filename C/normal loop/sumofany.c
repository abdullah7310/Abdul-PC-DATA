#include<stdio.h>
int main()
{
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    int sum=0;
    while(n>0){
        int a;
        a=n%10;
        n=n/10;
        sum=sum+a;
    } 
    printf("the total sum is : %d",sum);
    return 0;
}