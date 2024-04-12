#include<stdio.h>
int main()
{
    int phy,chem,bio,math,comp;
    printf("enter the marks of physics >>");
    scanf("%d",&phy);
     printf("enter the marks of chemistry >>");
    scanf("%d",&chem);
     printf("enter the marks of biology >>");
    scanf("%d",&bio);
     printf("enter the marks of math >>");
    scanf("%d",&math);
     printf("enter the marks of computer >>");
    scanf("%d",&comp);
    int total,percent;
    total=phy+chem+bio+math+comp;
    percent=100*total/500;
    if(percent>=90)
    {
        printf("Grade A");
    }else if (percent>=80)
    {
        printf("Grade B");
    }else if(percent>=70)
    {
        printf("Grade C");
    }else if(percent>60)
    {
        printf("Grade D");
    }else if(percent>=40)
    {
        printf("Grade E");
    }else 
    {
        printf("Grade F");
    }
    return 0;
}