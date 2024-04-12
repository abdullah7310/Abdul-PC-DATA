#include<stdio.h>
int main ()
{
    int a,b,c,d,e;
    printf("enter the a :");
    scanf("%d",&a);
    printf("enter the b :");
    scanf("%d",&b);
    printf("enter the c :");
    scanf("%d",&c);
    printf("enter the d :");
    scanf("%d",&d);
    printf("enter the e :");
    scanf("%d",&e);

    int max,smax,tmax,fmax;

    if(a>b)
    {
        max=a;
        smax=b;
    }else
    {
        smax=a;
        max=b;
    }

    // find third maximum

    if(c>max)
    {
        tmax=smax;
        smax=max;
        max=c;
    }else if(c>smax)
    {
        smax=c;
        tmax=smax;
    }else{
        tmax=c;
    }

    // find fourth maximum

    if(d>max)
    {
        fmax=tmax;
        tmax=smax;
        smax=max;
        max=d;
    }else if(d>smax)
    {
        smax=d;
        tmax=smax;
        fmax=tmax;
    }else if(d>tmax)

    {
        tmax=d;
        fmax=tmax;
    }else{
        fmax=d;
    }

    //take fifth input

    if(e>max)
    {
        fmax=tmax;
        tmax=smax;
        smax=max;
        max=e;
    }else if(e>smax)
    {
        fmax=tmax;
        tmax=smax;
        smax=e;
    }else if(e>tmax)
    {
        fmax=tmax;
        tmax=e;
    }else
    {
        fmax=e;
    }
    printf("Fourth max is :%d \n",fmax);
    return 0;
}