#include<stdio.h>
int main(){
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}