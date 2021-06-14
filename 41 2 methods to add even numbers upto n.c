#include<stdio.h>
#include<conio.h>
int main()
{int i,n,s=0;
//ist method

printf("enter n:");
scanf("%u",&n);
for(i=2;i<=2*n;i=i+2)
{
    s=s+i;}
    printf("sum:%d\n\n",s);

//2nd method
printf("enter n:");
scanf("%d",&n);
s=0;
for(i=0;i<=2*n;i++)
{if(i%2==0)
s=s+i;}
printf("sum is:%d\n",s);
}
