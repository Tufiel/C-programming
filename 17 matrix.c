#include<conio.h>
#include<stdio.h>
#include<math.h>

void main(void)
{int n,m,k,sum=0,l;
printf("Enter a number:");
scanf("%d",&n);
m=n;
while(n!=0)
{k=n%10;printf("%d modulus ten = %d\n",n,k);printf("%d + %d=",sum,k);
sum+=k;printf("%d\n",sum); printf("%d/10=",n);
n=n/10;printf("%d\n",n);
}
l=(sum%10)*10+sum/10;printf("(%d modulus 10) x 10 + %d/10 = %d\n",sum,sum,l);
n=sum*l;printf("n=%d x %d =%d\n",sum,l,n);
if(n==m)
    printf("%d is magic number \n\n",m);
else
    printf("%d is not a magic number \n\n",m);
_getch();

}









