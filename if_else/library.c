#include<stdio.h>
int main()
{
    int days;
    printf("enter the days >>");
    scanf("%d",&days);
    if(days<=5)
    {
        int cost;
        cost=days*2;
        printf("total charges >> %d \n",cost);
    }else if(days<=10)
    {
        int cost;
        cost=(((days-5)*3)+(5*2));
        printf("total cost >> %d \n",cost);
    }else if(days<=15)
    {
        int cost;
        cost=(((days-10)*4)+(5*3+5*2));
        printf("total cost >> %d \n",cost);
    }else
    {
        int cost;
        cost=(((days-15)*5)+(5*4+5*3+5*2));
    }
    return 0;
}