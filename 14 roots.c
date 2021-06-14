#include<conio.h>
#include<stdio.h>
#include<math.h>

void main()
{float ra,rb,rar,rbi;
int a,b,c,d,e;
printf("Enter the value of a:");
scanf("%d",&a);
printf("Enter the value of b:");
scanf("%d",&b);
printf("Enter the value of c:");
scanf("%d",&c);


e=((b*b)-4*a*c)/(2*a);
d=(sqrt(e));

if(d>0)
{ra=(-b/(2*a))+d;
 rb=(-b/(2*a))-d;
}
 else if(d==0)
 {ra=-b/(2*a);
  rb=ra;

 }

 else if(d<0)
 {
     rar=-b/(2*a);
     rbi=sqrt(-d)/2*a;}


printf("first root:%f + %f i\n ",ra,rb);
printf("\nsecond root:%f - %f i",rar,rbi);
getch();}

