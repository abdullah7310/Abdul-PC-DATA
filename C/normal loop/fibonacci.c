#include<stdio.h>
int main()
{
    int  n;
    printf("enter the number :");
    scanf("%d",&n);
    int a=0,b=1,sum,i;
    printf("%d\n%d\n",a,b);
    for(i=1;i<=n-2;i++){
        sum=a+b;
        a=b;
        b=sum;
        printf("%d\n",sum);

    }
    return 0;
}