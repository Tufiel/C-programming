#include<stdio.h>
#include<conio.h>
#include<graphics.h>
main()
{a:
    int n,i,j,t=1;

printf("\n\nEnter a number:");
scanf("%d",&n);

for(i=2;i<n;i++)
{if(n%i==0)
 {printf("%d is not prime number",n);
    t=0;
    goto e;}
}
if(t==1)
  printf("%d is prime number",n);
  e:
  goto a;
}
