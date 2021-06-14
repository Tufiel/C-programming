#include<stdio.h>
#include<conio.h>

main()
{int i,s,e,r=0,avg;
while(1){
printf("enter a starting number:");
scanf("%d",&s);
printf("enter a ending number:");
scanf("%d",&e);
for(i=s;i<=e;i++)
r=r+i;
printf("result:%d\n",r);
avg=r/(e-s);
printf("avg:%d\n\n",avg);
getch();
}




}
