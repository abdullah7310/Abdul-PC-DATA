#include<stdio.h>
#include<math.h>

int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    for(int i=0,i<n,i++){
        int p= pow(2,i);
         if(p==n){
            printf("True");
            break;
         }
    }
    
    

}