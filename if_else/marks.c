#include <stdio.h>
int main()
{
    int marks;
    printf("enter marks :"); 
     scanf("%d", &marks);

    if (marks > 80)
    {
        printf("excellent \n");
    }
    else if (marks > 60)
    {
        printf("very good \n");
    }
    else if (marks > 50)
    {
        printf("average \n");
    }
    else
    {
        printf("fail");
    }
    return 0;
}