#include<stdio.h>
int main()
{
    int class,present;
    printf("enter the class number of class held :");
    scanf("%d",&class);
    printf("enter the number of present in the class :");

    scanf("%d",&present);
    int percent;
    percent=100*present/class;
    if(percent>75)
    {
        printf("allowed");
    }else
    {
        printf("not allowed");
    }
    return 0;
}