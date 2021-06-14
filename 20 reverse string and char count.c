#include<conio.h>
#include<stdio.h>


main()
{int n,i,p;
while(1){printf("Enter n:");
scanf("%d",&n);
a:
printf("1.even\n2.odd\n3.Exit\n:");
scanf("%d",&p);
switch(p){
case 1:for(i=n;i>0;i--)
    if(i%2==0)
    printf("%d ",i);
case 2:for(i=n;i>0;i--)
    if(i%2!=0)
    printf("%d ",i);
 case 3:exit(1);
 default:printf("Enter correct option!\n");
 goto a;}
}
_getch();
}
