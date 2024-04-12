#include<stdio.h>
int main()
{
    int unit;
    printf("enter the unit :");
    scanf("%d",&unit);
    if(unit<=100)
    {
        printf("its free baby");
    }else if(unit<200)
    {
        float amount;
        amount=((unit-100)*5);
        printf("total cost is %.1f \n",amount);

    }else{
        float amount;
        amount=(((unit-200)*10)+(100*5)+(100*0));
        printf("total cost is >> %.1f \n",amount);
    }
    return 0;
}