// #include <stdio.h>

// int main()
// {
//     int date, month, year;
//     printf("enter date :~");
//     scanf("%d", &date);
//     printf("enter the month :~");
//     scanf("%d", &month);  // Corrected typo here
//     printf("enter the year :~");
//     scanf("%d", &year);

//     if (year > 0)
//     {
//         if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//         {
//             if (month >= 1 && month <= 12)
//             {
//                 if (month == 2)
//                 {
//                     if (date > 0 && date <= 29)
//                     {
//                         printf("valid");
//                     }
//                     else
//                     {
//                         printf("not valid");
//                     }
//                 }
//                 else if (month == 4 || month == 6 || month == 9 || month == 11)
//                 {
//                     if (date > 0 && date <= 30)
//                     {
//                         printf("valid");
//                     }
//                     else
//                     {
//                         printf("not valid");
//                     }
//                 }
//                 else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
//                 {
//                     if (date > 0 && date <= 31)
//                     {
//                         printf("valid");
//                     }
//                     else
//                     {
//                         printf("not valid");
//                     }
//                 }
//                 else
//                 {
//                     printf("not valid");
//                 }
//             }
//             else
//             {
//                 printf("not valid");
//             }
//         }
//         else
//         {
//             printf("not valid");
//         }
//     }
//     else
//     {
//         printf("not valid");
//     }

//     return 0;
// }


#include<stdio.h>
int main()
{
    int day,month,year;
    printf("enter the date>> ");
    scanf("%d",&day);
    printf("enter the month >> ");
    scanf("%d",&month);
    printf("enter the year>> ");
    scanf("%d",&year);


    if(day>0  && month>=1  && month<=12 && year>=1)
    {
        if(month==2)
        {
            if(((year%4==0 && year%100!=0)||year%400==0)&& day>=1 && day<=29)
            {
                printf("valid");
            }else if(day>=1 && day<=28)
            {
                printf("valid");
            } else{
                printf("not valid");
            }
        
        }else
        {
            if((month==4||month==6||month==9||month==11) && day<=30)
            {
                printf("valid");
            }else
            {
                if(month<=12  && day<=31)
                {
                    printf("valid");
                }else
                {
                    printf("not valid");
                }
            }
        }
    }else
    {
        printf("not valid");
    }
    return 0;
}
