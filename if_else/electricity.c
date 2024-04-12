#include<stdio.h>
int main()
{
    int units;
    printf("unit daal bsdk>>");
    scanf("%d",&units);
    if(units<=50)
    {
        float amount,total_bill,poora_bill_aaya;
        amount=units*0.50;
        total_bill=amount*20/100;
        poora_bill_aaya=amount+total_bill;
        printf("poora bill dekh laude >> %f \n",poora_bill_aaya);
    }else if(units<=150)
    {
        float amount,total_bill,poora_bill_aaya;
        amount=((units-50)*0.75)+(50*0.50);
        total_bill=amount*20/100;
        poora_bill_aaya=amount+total_bill;
        printf("pooora bill dekh  laude>> %f \n",poora_bill_aaya);
        
    }else if(units<=250)
    {
        float  amount,total_bill,poora_bill_aaya ;
        amount=((units-150)*1.20)+(50*0.50 + 100*0.75);
        total_bill=amount*20/100;
        poora_bill_aaya=amount+total_bill;
        printf("poora bill dekh laude >>  %f \n",poora_bill_aaya);
    }else
    {
        float amount,total_bill,poora_bill_aaya;
        amount=((units-250)*1.50)+(50*0.50+100*0.75+100*1.20);
        total_bill=amount*20/100;
        poora_bill_aaya=amount+total_bill;
        printf("poora bill aaya dekh laude >> %f \n",poora_bill_aaya);
    }
    return 0;
}