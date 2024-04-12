#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("enter the age of Ram :");
    scanf("%d", &a);
    printf("enter the age of shyam :");
    scanf("%d", &b);
    printf("enter the age of ajay : ");
    scanf("%d", &c);
    if (a < b && a < c)
    {
        printf("ram is youngest : %d \n", a);
    }
    if (b < c && b < a)
    {
        printf("shyam is youngest : %d \n", b);
    }
    if (c < a && c < b)
    {
        printf("ajay is youngest : %d \n", c);
    }
    return 0;
}
