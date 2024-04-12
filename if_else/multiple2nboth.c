// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter the value of n");
//     scanf("%d",&n);
//     if(n%2==0){
//         printf("%d",n);
//     }
//     else{
//         printf("%d",n*2);
//     }
//     return 0;
// }

// "Write a program to take three numbers from 
// the user and print the greater number of the
//  three numbers. (Assume all three numbers are
//   distinct

// #include<stdio.h>
// int main(){
//     int a,b,c, max=0,max1=0;
//     printf("enter the value :~");
//     scanf("%d",&a);
//     printf("enter the value :~");
//     scanf("%d",&b);
//     printf("enter the value :~");
//     scanf("%d",&c);
//     if(a>b){
//         printf("a is greator %d \n",a);
//     }
//     if(a>b){
//         max=a;
//     }
//     else if(a>c){
//         max=a;
//     }
//     if(b>c){
//         max=b;
//     }
//     else{
//         max=c;
//     }

//     printf("%d",max);

//     return 0;

// }

// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("enter  the value of a :~");
//     scanf("%d",&a);
//     printf("enter the value of b :~");
//     scanf("%d",&b);

//     if(a>b){
//         printf("a greator ");
//     }if (a==b){
//         printf("a and b equal ");
//     }else {
//         printf("b is greator ");
//     }
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int marks;
//     printf("enter the marks :");
//     scanf("%d",&marks);
//     if(marks>30 && marks<=100
//         printf("pass");
//     } else{
//         printf("fail");
//     }
//     return 0;
// }



// #include<stdio.h>
// int main(){
//     int l,b;
//     printf("enter the value of a :");
//     scanf("%d",&l);
//     printf("enter the value of b :");
//     scanf("%d",&b);
//     int area;
//     area=l*b;
//     int  perimeter;
//     perimeter=2*(l+b);
//     if(area>perimeter){
//         printf("area is greator");
//     }
//     if(perimeter>area){
//         printf("perimeter is greator");
//     }
//     return 0;
// }




// #include<stdio.h>
// check if it is divisible byy 3 and 5

// int main(){
//     int n;
//     printf("enter the number :");
//     scanf("%d",&n);
//     if (n%5==0 && n%3==0){
//         printf("its divisivle by both");
//     }else{
//         printf("it is not divisible by both");
//     }
//     return 0;
// }


// check  number is three digit or  not

// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter the number");
//     scanf("%d",&n);
//     if(n>99 && n<1000){
//         printf("number is three digit");
//     } else{
//         printf("number is not three digit");
//     }
//     return 0;
// }


// Find the greatest of three number

// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("enter the first number :");
//     scanf("%d",&a);
//     printf("enter the second number :");
//     scanf("%d",&b);
//     printf("enter the third number :");
//     scanf("%d",&c);
//     if(a>b && a>c){
//         printf("a is greatest : %d \n",a);

//     }if(b>c && b>a){
//         printf("b is greatest : %d \n",b);
        
//     }if (c>a && c>b){
//         printf("c is greatest : %d \n",c);
//     }
//     return 0;
// }

// four inputs greatest:
// #include<stdio.h>
// int main(){
//     int a, b, c,d,f1,f2,smax=0,max=0;
//     printf("Enter the number a: ");
//     scanf("\n%d",&a);
//     printf("Enter the number b: ");
//     scanf("\n%d",&b);
//     printf("Enter the number c: ");
//     scanf("\n%d",&c);
//     printf("Enter the number d: ");
//     scanf("%d",&d); 

//     if(a>b){
//         f1=a;
//     }else{
//         f1=b;
//     }

//     if(c>d){
//         f2=c;
//     }else{
//         f2=d;
//     }

//     if(f1>f2){
//         max=f1;
//         smax=f2;
//     }else{
//         max=f2;
//         smax=f1;
//     }

//     printf("Smax:%d \n max :%d \n",smax,max);
//     return 0;
// }


// Take 3 numbers input and tell if they 
// can be the side of a triangle

