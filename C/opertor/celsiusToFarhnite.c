#include<stdio.h>
int main(){
    int a;
    printf("enter the value of a:~");
    scanf("%d",&a);
    int b;
    printf("enter the value of b:~");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a: %d  b:%d",a,b);
    return 0;
}