#include<stdio.h>
int main()
{
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    int sum=0;
    int i=1;
    while(i<=n){
        if(i%2==0){
            sum+=i;
            i++;
        }else{
            i++;
        }
    }
    printf("the sum of all even number is :%d",sum);
    return 0;
}