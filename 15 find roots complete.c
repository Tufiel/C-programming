#include<conio.h>
#include<stdio.h>
#include<math.h>

void main(void)
{int i,option;
    float r1,r2,a,b,c,d,r1i,r1r,r2i,r2r;
printf("choose an option\n1.find roots\n2.exit\n:");
scanf("%d",&option);
    while(1){
switch(option){

case 1:
printf("Enter a:");
scanf("%f",&a);
printf("\nEnter b:");
scanf("%f",&b);
printf("\nEnter c:");
scanf("%f",&c);
d=(b*b)-(4*a*c);/*Here d=bxb-4ac*/

if(d>=0)/*if d is greater or equal to 0 then we will apply roots=-b+-square root d => where d=bxb-4ac*/
{r1=(-b+(sqrt(d)))/2*a;
r2=(-b-(sqrt(d)))/2*a;
 printf("root 1:%f",r1);
printf("\nroot 2:%f\n\n",r2);
break;}
else/*now if d is negative then we have to split it into two one real part and another imaginary part
    => real part =-b/2a and imaginary part is square root d but d is - let us make it positive by multiplying it with iota i which is equal to square root -1*/
{r1r=(-b)/2*a;
r1i=(sqrt(-d))/2*a;
r2r=(-b)/2*a;
r2i=(sqrt(-d))/2*a;
printf("root 1:%f+i%f",r1r,r1i);
printf("\nroot 2:%f-i%f\n\n",r2r,r2i);
break;
}
case 2:exit(0);
default:printf("invalid option choose a right option\n\n");
main();}
getch();
}}
