#include<stdio.h>
int main()
{
    int n;
    printf("enter the value :");
    scanf("%d",&n);
     int reverse=0;
     int k=n;
     while(n>0){
        int a;
        a=n%10;
        reverse=reverse*10+a;
        n=n/10;
     }
     printf("reverse is :%d",reverse+k);
     return 0;
}