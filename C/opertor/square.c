// #include<stdio.h>
// int main(){
//     int side;
//     printf("enter side");
//     scanf("%d",&side);
//     printf("area is : %d",side*side);
//     return 0;
// }

// // area of circle

// #include<stdio.h>
// int main(){
//     float r;
//     printf("enter the radius : ");
//     scanf("%f",&r);
//     printf("area od circle is : %f",3.14*r*r);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int a= (int) 1.999999;
//     printf("%d" ,a);
//     return 0;

// }

// #include<stdio.h>
// int main(){
//     int age;
//     printf("enter age :");
//     scanf("%d",&age);
//   age >=18 ? printf("adult \n") : printf("not adult \n");
//   return 0;

// }
// Create a program that takes two numbers from the user and calculates their average.

// #include<stdio.h>
// int main(){
//     int a ;
//     int b;
//     printf("enter the value :");
//     scanf("%d",&a);
//     printf("enter the value :");
//     scanf("%d",&b);
//     float c,d;
//     c=a+b;
//     d=c/2;
//     printf(" average is %.1f ",d);
//     return 0;

// }


// write a program to calculate the area of a triangle based on its base and height.
//  You need to create a program that takes the base and height of the triangle as input from the user
//   and then calculates and displays the area of the triangle.

// #include<stdio.h>
// int main(){
//     int b;
//     int h;
//     printf("enter the base :");
//     scanf("%d",&b);
//     printf("enter the height :");
//     scanf("%d",&h);
//     int area,a;
//     a=b*h;
//     area=a*1/2;
//     printf("area :%d\n",area);
//     return 0;

// }

    //  T = P * (1 + I/100)^N

// #include<stdio.h>
// int main(){
//     int p,i,n;
//     printf("enter the amount :");
//     scanf("%d",&p);
//     printf("enter the interest :");
//     scanf("%d",&i);
//     printf("enter the years :");
//     scanf("%d",&n);
//     //  T = P * (1 + I/100)^N
//     int a,b,T;
//     a=(1+i/100);
//     b=(int) pow(n,a);
//     T=p*b;
//     printf("total %d",T);
//     return 0;

// }

// / #include<stdio.h>
// int main(){
//     int a;
//     int b;
//     printf("enter the value :");
//     scanf("%d",&a);
//     printf("enter the value :");
//     scanf("%d",&b);
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     printf("values are : %d %d",a,b);
//     return 0;
    
// }

// power function
// #include <stdio.h>
// #include <math.h>
// int main(){
//     int a;
//     int b;
//     printf("enter value ");
//     scanf("%d",&a);
//     printf("enter the value ");
//     scanf("%d",&b);
//     int c;
//     c=pow(a,b);
//     printf("%d",c);
//     return 0;
// }

// write a program that can perform four basic operations (addition, subtraction, 
// division, and multiplication) on two given whole numbers, A and B.
// #include<stdio.h>
// int main(){
//     int a,b;
//     printf("enter the value :");
//     scanf("%d",&a);
//     printf("enter the value :");
//     scanf("%d",&b);
//     int c,d,e,f;
//     c=a+b;
//     d=a-b;
//     e=a*b;
//     f=a/b;
//     printf("add %d \n sub %d \n mult %d\n div %d\n",c,d,e,f);
//     return 0;

// }


// Write a program to calculate the area and perimeter of a rectangle.
// (Input length and breadth of the rectangle from the user)


// #include<stdio.h>
// int main(){
//     int l;
//     int b;
//     printf("enter the value of l:");
//     scanf("%d",&l);
//     printf("enter the value of b :");
//     scanf("%d",&b);
//     int area,perimeter;
//     area = l*b;
//     perimeter = 2*(l+b);
//     printf("area %d \n perimeter %d \n",area,perimeter);
//     return 0;
// }


// SEMIPERIMETER

// #include<stdio.h>
// int main(){
//     int a;
//     int b;
//     int c;
//     printf("enter the value of a :");
//     scanf("%d",&a);
//     printf("enter the value of b :");
//     scanf("%d",&b);
//     printf("enter the value of c :");
//     scanf("%d",&c);
//     float  semiP,d;
//     d=a+b+c;
//     semiP=d/2;
//     printf("semiperemeter  %f",semiP);
//     return 0;

    
// }

// area of circle
// #include<stdio.h>
// int main(){
//     int r;
//     printf("entr the value of r ");
//     scanf("%d",&r);
//     float area ;
//     area=3.14*r*r;
//     printf("area of circle  %f",area);
//     return 0;
// }


// you need to create a program that takes the circumference of the circle as input
//  from the user and then calculates the diameter of the circle. (take π = 3.14)




// #include<stdio.h>
// int main(){
//     float c;
//     printf("enter the circumference :");
//     scanf("%f",&c);
//     float diameter;
//     diameter=c/(3.14);
//     printf("diameter :%.1f",diameter);
//     return 0;
// }

// LATERAL SURFACE AREA

// #include<stdio.h>
// int main(){
//     int side;
//     printf("enter the side :");
//     scanf("%d",&side);
//     int lsa,tsa;
//     lsa=4*side*side;
//     tsa=6*side*side;
//     printf("lateral surface area :%d total surface area :%d",lsa,tsa);
//     return 0;
// }


// You need to create a program that takes a positive number as input from the user
//  and then displays the last digit of that number.


// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter the number :");
//     scanf("%d",&n);
//     int d;
//     d=n%10;
//     printf("last digit : %d",d);
//     return 0;

// }


// Write a program to calculate remainder when a is divided by b.

// #include<stdio.h>
// int main(){
//     int a;
//     int b;
//     printf("enter the a :");
//     scanf("%d",&a);
//     printf("enter the b :");
//     scanf("%d",&b);
//     int d;
//     d=a%b;
//     printf("reminder : %d",d);
//     return 0;
    
// }




// You want to create a program that calculates the selling price of a product when
//  you know the Maximum Retail Price (MRP) and the discount percentage. The program 
//  should take inputs from the user, the MRP, and the discount percentage, and then 
//  it should calculate and display the selling price of the product after applying the 
//  discount.


// #include<stdio.h>
// int main(){
//     int mrp;
//     int disc;
//     printf("enter mrp :");
//     scanf("%d",&mrp);
//     printf("enter discount :");
//     scanf("%d",&disc);
//     int a,b;
//     a=mrp*disc/100;
//     b=mrp-a;
//     printf("selling price : %d",b);
//     return 0;

// }


// Write a program to calculate the square of a number.

// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter the number :");
//     scanf("%d",&n);
//     int b;
//     b=n*n;
//     printf("square : %d \n",b);
//     return 0;
// }



// Write a program to calculate how many books we can buy if we have x Rs . 
// (Cost of a book = Rs. y)(input x,y from user)


// #include<stdio.h>
// int main(){
//     int x;
//     printf("we have rupees :");
//     scanf("%d",&x);
//     int y;
//     printf("cost of a book :");
//     scanf("%d",&y);
//     int a;
//     a=x/y;
//     printf("we can buy books %d \n",a);
//     return 0;

// }


// Write a program to calculate the total marks obtained by a student in examination. 
// (Subjects : - Hindi, Maths, English, Science, Computer)(Input marks of all 5 subjects from the user)


// // #include<stdio.h>
// // int main(){
// //     int h,m,e,s,c;
// //     printf("hindi ");
// //     scanf("%d",&h);
// //     printf("math ");
// //     scanf("%d",&m);
// //     printf("science ");
// //     scanf("%d",&s);
// //     printf("english ");
// //     scanf("%d",&e);
// //     printf("computer ");
// //     scanf("%d",&c);
// //     int total;
// //     total=h+m+s+e+c;
// //     printf("total marks : %d \n",total);
// //     return 0;

// }



// #include<stdio.h>
//  int main(){
//      int h,m,e,s,c;
//      printf("hindi ");
//      scanf("%d",&h);
//      printf("math ");
//      scanf("%d",&m);
//      printf("science ");
//      scanf("%d",&s);
//      printf("english ");
//      scanf("%d",&e);
//      printf("computer ");
//      scanf("%d",&c);
//      int total,percent;
//      total=h+m+s+e+c;
//      percent=100*total/500;
//      printf("percentage : %d \n",percent);
//     return 0;

// }

