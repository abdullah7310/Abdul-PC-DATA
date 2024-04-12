#include<stdio.h>
int main()
{
    int side1,side2,side3;
    printf("enter the side1 :");
    scanf("%d",&side1);
    printf("enter the side2 :");
    scanf("%d",&side2);
    printf("entr the side3  :");
    scanf("%d",&side3);
    if(side1+side2>side3 || side2+side3>side1 || side3+side1>side2)
    {
        if(side1==side2 && side2==side3)
        {
            printf("its an equilateral triangle");
        }else if(side1!=side2 && side2!=side3)
        {
            printf("its a scalene triangle");
        }else if(side1==side2 || side2==side3 || side3==side1)
        {
            printf("its an isoscele triangle");
        }else if(side1*side1+side2*side2==side3*side3 || side2*side2+side3*side3==side1*side1 || side3*side3+side1*side1==side2*side2)
        {
            printf("its an right angle triangle ");
        }
    }else{
        printf("its not a valid triangle");
    }
    return 0;
}
