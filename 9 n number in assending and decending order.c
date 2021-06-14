#include<stdio.h>
#include<conio.h>
int main()
{int a[5],i,j,t,x,y;
printf("Please enter five numbers:\n");
for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    printf("\nArrangement from higher to lowest:\n\n");
for(i=1;i<5;i++)
    for(j=0;j<4;j++)
if(a[i]>a[j])
{t=a[j];
a[j]=a[i];
a[i]=t;}
for(i=0;i<5;i++)
    printf("%d \n",a[i]);
x=a[4];
  printf("\nArrangement from lowest to highest:\n\n");
    for(i=1;i<5;i++)
    for(j=0;j<4;j++)
    if(a[i]<a[j])

{t=a[j];
a[j]=a[i];
a[i]=t;}
  y=a[4];
for(i=0;i<5;i++)
    printf("%d \n",a[i]);
    printf("\nDifference between highest and lowest number is %d",y-x);
}
