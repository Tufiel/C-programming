#include<stdio.h>
#include<conio.h>
void main()
{int i,k,n;
printf("Enter number of rows and columbs:");
scanf("%d",&n);
int a[n][n];
for(i=0;i<n;i++)
    for(k=0;k<n;k++)
  a[i][k]=0;
  for(i=0;i<n;i++)
{printf("Enter value of %d%d:",i+1,i+1);
scanf("%d",&a[i][i]);}
for(i=0;i<n;i++)
{printf("\n");
    for(k=0;k<n;k++)
        printf("%d ",a[i][k]);}


}
