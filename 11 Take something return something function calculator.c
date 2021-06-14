#include<conio.h>
#include<stdio.h>
#include<math.h>

main()
{int n;
float s=-4.59,p,q,m;
printf("enter n:");
scanf("%d",&n);
for(p=1;p<=n;p++)
for(q=2;q<=(n+1);q++)
    s=s+(p/q);
    m=(q-2)*(q-1);
if(n%2!=0)
printf("sum is :%f!\n",s);
if(n%2==0)
printf("sum is : %f/%f!",s,m);
}
