#include<stdio.h>
#define ops 4

float sum(float a,float b){return(a+b);}
float sub(float a,float b){return(a-b);}
float d(float a,float b){return(a/b);}
float m(float a,float b){return(a*b);}



int main()

{
float a,b,(*p[ops])(float,float)={sum,sub,d,m};
int c;
printf("Enter your choice\n0.sum\n1.subtraction\n2.division\n3.multiplication\n:");
scanf("%d",&c);
printf("Enter first number\n:");
scanf("%f",&a);
printf("Enter second number\n:");
scanf("%f",&b);
printf("\nResult:%.2llf",p[c](a,b));


return 0;
}
