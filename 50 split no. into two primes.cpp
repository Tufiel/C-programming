#include<stdio.h>
#include<conio.h>
int np(int i);
int p(int n);
main()
{start:
     int t,i,n;
printf("\nEnter a number:");
scanf("%d",&n);
for(i=2;i<=n/2;i=np(i))
if(p(n-i))
    {printf("\n%d + %d = %d \n",i,n-i,n);
}
    printf("\n\n1.continue\n2.quit\n:");
    scanf("%d",&t);
    if(t!=2)
        goto start;
    printf("\n\n\n\n\t\t\t\tThanks for using ....\n\n\n");
}

int np(int i)
{i++;
    while(!p(i))
i++;
return(i);
}


int p(int n)
{
int i;
for(i=2;i<n;i++)
if(n%i==0)
{return(0);}
return(1);
}















