#include<stdio.h>
int main()
{
    int salary,year;
    printf("enter the salary :");
    scanf("%d",&salary);
    printf("enter the years :");
    scanf("%d",&year);
    if (year>5)
    {
        int bonus;
        bonus=salary*5/100;
        printf("bonus amount is :~ %d",bonus);
        
    }else{
        printf("no bonus");

    }

    return 0;
}