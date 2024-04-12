#include<stdio.h>
int main()
{
    int salary;
    printf("enter the salary >>");
    scanf("%d",&salary);
    if(salary<=10000)
    {
        int hra,DA,Gross;
        hra=salary*20/100;
        DA=salary*80/100;
        Gross =salary+hra+DA;
        printf("total salary is >>%d \n",Gross);

    }else if (salary<=20000)
    {
        int hra,DA,Gross;
        hra=salary*25/100;
        DA=salary*90/100;
        Gross=salary+hra+DA;
        printf("total salary is >>%d \n",Gross);
    }else 
    {
        int hra,DA,Gross;
        hra=salary*30/100;
        DA=salary*95/100;
        Gross=salary+hra+DA;
        printf("total salary is >> %d \n",Gross);
    }
    return 0;
}