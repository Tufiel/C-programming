#include<stdio.h>
#include<conio.h>
void main()
{int t[10],s=0,i;
float avg;
while(1){
printf("Enter five numbers\n:");
for(i=0;i<=9;i++)
    scanf("%d",&t[i]);
for(i=0;i<=9;i++)
    s=s+t[i];
    avg=s/10.0;
printf("avg is:%f\n\n",avg);}
getch();}
