#include<stdio.h>
#include<conio.h>
int main()
{int choice,s,n,a,l,d;
while(1){
printf("1.a,l,n known find s and d\n");
printf("2.a,l,d known find s and n\n");
printf("3.s,l,n known find a and d\n");
printf("4.Exit\n:");
scanf("%d",&choice);


switch(choice)
{case 1:
printf("Enter the first term:");
scanf("%d",&a);
printf("Enter the last term:");
scanf("%d",&l);
printf("Enter number of terms:");
scanf("%d",&n);
s=(n/2)*(a+l);
printf("sum is:%d\n",s);
d=(l-a)/(n-1);
printf("common difference is:%d\n\n\n",d);
break;

case 2:printf("Enter the first term:");
scanf("%d",&a);
printf("Enter the last term:");
scanf("%d",&l);
printf("Enter common difference:");
scanf("%d",&d);
n=(l-a+d)/d;
printf("number of terms:%d\n",n);
s=(n/2)*(a+l);
printf("sum is:%d\n\n\n",s);
break;

case 3:printf("\nEnter sum:");
       scanf("%d",&s);
       printf("\nEnter last term:");
       scanf("%d",&l);
       printf("\nEnter number of terms:");
       scanf("%d",&n);
a=((2*s)/n)-l;
printf("First term is:%d\n",a);
d=(l-a)/(n-1);
printf("common difference is:%d\n\n\n",d);
break;

case 4:exit(1);
default: printf("invalid input\n\n");

getch();

}}
}
