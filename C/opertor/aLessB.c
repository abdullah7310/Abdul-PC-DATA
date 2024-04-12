#include<stdio.h>
int main(){
    int a;
    printf("enter the value of a:~");
    scanf("%d",&a);
    int b;
    printf("enter the value of b:~");
    scanf("%d",&b);
    int c,d;
    a=a-1;

    c=a/b;
    d=c*b;
    printf("number is:~ %d",d);
    return 0;
}