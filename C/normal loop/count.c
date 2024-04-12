#include<stdio.h>
int main()
{
    int n,count=0;
    printf("enter the value :");
    scanf("%d",&n);
    while(n>0){
        n=n/10;
        count+=1;

    }
    printf("the no.of digit is %d",count);

    return 0;
}