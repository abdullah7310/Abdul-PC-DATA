#include<stdio.h>
int main()
{
    int angle1,angle2,angle3;
    printf("enter the value of angle1 :");
    scanf("%d",&angle1);
    printf("enter the value of angle2 :");
    scanf("%d",&angle2);
    printf("enter the value of angle3 :");
    scanf("%d",&angle3);
    if(angle1+angle2+angle3==180 && angle1>0 && angle2>0 &&angle3>0)
    {
        if(angle1==angle2 && angle2==angle3)
        {
            printf("it is an equinguler \n");
        }else if(angle1==90 || angle2==90 || angle3==90)
        {
            printf("it is a right angled triangle");

        }else if(angle1>90 || angle2>90 || angle3>90)
        {
            printf("it is an obtuse angle triangle ");
        }else if(angle1<90 || angle2<90 || angle3<90)
        {
            printf("acute angled triangle");
        }
    } else
    {
        printf("invalid traingle");
    }
    return 0;
        
    
    
}