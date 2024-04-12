#include<stdio.h>
int main()
{
    int  age;
    printf("enter the age :~");
    scanf("%d",&age);
    if(age<18)
    {
        printf("person is not eligible for vote \n");
    }else if(age>=18)
    {
        printf("person is eligible for vote \n");
    }
    return 0;
}