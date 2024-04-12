#include<stdio.h>
int main()
{
    int  a,b,c;
    printf("enter  the number a :");
    scanf("%d",&a);
    printf("enter the number b :");
    scanf("%d",&b);
    printf("enter the number c :");
    scanf("%d",&c);
    int tmax;
    if(a>=b && a>=c)
    {
        if(b>=c)
        {
            tmax=c;
            printf("third max is : %d \n",tmax);
        }else
        {
            tmax=b;
            printf("third max is :%d \n",tmax);
        }
    }else if(b>=c && b>=a)
    {
        if(c>=a)
        {
            tmax=a;
            printf("third max is :%d \n",tmax);
        }else
        {
            tmax=c;
            printf("third max is c :%d\n",tmax);
        }
    }else if(c>=a && c>=b)
    {
        if(a>=b)
        {
            tmax=b;
            printf("third max is :%d\n",tmax);
        }else
        {
            tmax=a;
            printf("third max is :%d\n",tmax);
        }
    }
    return 0;
}