#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the number a :");
    scanf("%d",&a);
    printf("enter the number b :");
    scanf("%d",&b);
    printf("enter the number c :");
    scanf("%d",&c);
    int smax;
    if(a>=b && a>=c)
    {
        if(b>=c)
        {
            smax=b;
            printf("second max is %d \n",smax);
        }else{
            smax=c;
            printf("second max is %d \n",smax);
        }
    }else if (b>=c && b>=a)
    {
        if(c>=a)
        {
            smax=c;
            printf("second max is %d \n",smax);
        }else
        {
            smax=a;
            printf("second max is %d\n",smax);
        }
    }else if(c>=a  && c>=b)
    {
        if(a>=b)
        {
            smax=a;
            printf("second max is %d\n",smax);
        }else
        {

            smax=b;
            printf("second max is %d\n",smax);
        }
    }
    return 0;
}