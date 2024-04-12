#include<stdio.h>
int main(){
    int quantity;
    printf("enter the quantity: ");
    scanf("%d",&quantity);
    int d;
    d=quantity*100;
    if(d>1000)
    {
        int e;
        e=d*10/100;
        int f=d-e;
        printf("total amount is :~ %d",f);

          
    }else{
        printf(" total amount is :~ %d",d);
    }
    return 0;
}