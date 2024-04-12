#include <stdio.h>
int main()
{
    int month;
    printf("enter the month (1-12) >>");
    scanf("%d", &month);
    if (month >= 1 && month <= 12)
    {
        if (month == 2)
        {
            printf("the day will be 28");
        }
        else if(month == 4 || month == 6 || month == 9 || month == 11)

        {
            printf("the day will be >> 30 ");
        }
        else
        {
            printf("the day will be >> 31");
        }
       
    }
     else
        {
            printf("invalid month that you have entered");
        }
    return 0;
}