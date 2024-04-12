#include<stdio.h>
int main(){
    int ram,shyam,ajay;
    printf("enter the ram age :");
    scanf("%d"&ram);
    printf("enter the shyam age :");
    scanf("%d",&shyam);
    printf("enter the ajay age :");
    scanf("%d",&ajay);

    if(ram<shyam)
    {
        if(ram<ajay)
        {
            printf("ram is youngest \n",ram);
        }
        else
        {
            printf("ajay is youngest \n",ajay);
        }
    }
    else
    {
        if(shyam<ajay)
        {
            printf("shyam 
            is youngest \n",shyam);
        }
        else
        [
            printf("ajay is youngest \n",ajay);
        ]
    }
    return 0;
}