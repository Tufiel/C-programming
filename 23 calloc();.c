#include<conio.h>
#include<stdio.h>
#include<math.h>

main()
{int*p[20],n,i;
printf("enter number of values:");
scanf("%u",&n);
for(i=1;i<=n;i++)
{
printf("enter value %d:",i);

p[i]=calloc(n,4);
scanf("%u",p[i]);
printf("%u\n\n",*p[i]);}

realloc(p,8);
free(p);

}
