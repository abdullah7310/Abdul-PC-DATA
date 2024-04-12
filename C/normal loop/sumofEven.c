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
        if(a%2==0){
            sum=sum+a;
            n=n/10;
        } else{
            n=n/10;
        }

    }
    printf("the sum is :%d",sum);
    return 0;
}