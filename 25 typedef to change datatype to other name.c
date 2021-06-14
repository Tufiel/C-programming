#include<conio.h>
#include<stdio.h>
#include<math.h>
#define sum(a,b) a+b
#define product(a,b) (a)*(b)
#define subtract(a,b) a-b
#define divide(c,d) c/d
//using #define add,subtract,divide and multiply numbers

main()
{int a,b;
float c,d;
printf("enter two numbers to add:");
scanf("%d%d",&a,&b);
printf("sum of %d and %d is :%d\n\n ",a,b,sum(a,b));
printf("ENter two numbers to product:");
scanf("%d%d",&a,&b);
printf("product of %d and %d is :%d\n\n ",a,b,product(a,b));
printf("enter two numbers to subtract:");
scanf("%d%d",&a,&b);
printf("subtracting  %d from %d gives :%d\n\n ",b,a,subtract(a,b));
printf("enter two numbers to divide:");
scanf("%f%f",&c,&d);
printf("dividing %f from %f gives :%f\n\n ",d,c,divide(c,d));
getch();

}
#undef product(a,b)
