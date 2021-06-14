#include<conio.h>
#include<stdio.h>
#include<math.h>

void main(void)
{int i,s=0,f,l;
while(2){
printf("Enter first number:");
scanf("%d",&f);
printf("\nEnter last number:");
scanf("%d",&l);
for(i=f;i<=l;i++)
   {s=s+i;}
printf("\nsum is:%d\n\n",s);
main();
}

getch();



}
