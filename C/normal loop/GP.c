// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter the number :");
//     scanf("%d",&n);
//     int a=2;
//     for(int i=1; i<=n;  i=i+1){
//         printf("%d \n",a);
//         a=a*2;
//     }
//     return 0;
// }


#include<stdio.h>
int main()
{
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    int a=100;
    for(int i=1; i<=n;i=i+1){
        if(a>0) printf("%d \n",a);
        a=a-3;
    }
    return 0;
    
    }