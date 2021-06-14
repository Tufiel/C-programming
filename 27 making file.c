#include<conio.h>
#include<stdio.h>
#include<math.h>


main()
{int i,n,r,o,t;
while(1){
printf("\n\n1.Table\n2.exit\n:");
scanf("%u",&t);
switch(t)
{

case 1 :
printf("\n\nTable of:");
scanf("%d",&o);
printf("\nTable up to:");
scanf("%u",&n);
for(i=1;i<=n;i++)
{r=o*i;
 printf("\n%d x %d = %d",o,i,r);
 }
 break;
case 2:exit(0);

 default: printf("please choose correct option\n:");}

}}




