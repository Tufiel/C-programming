#include<stdio.h>
#include<conio.h>
int main()
{ int n=0,i,m[10];
printf("Enter marks of 10 students\n:");
for(i=0;i<10;i++)
{scanf("%d",&m[i]);}
for(i=0;i<10;i++)
   {

    if(m[i]>80)
   {n++;}
if(m[i]>=75)
    if(m[i]<=85)
    {printf("roll number:%d got %d\n",i,m[i]);}}
    printf("%d  students got 80 or above marks",n);





}
