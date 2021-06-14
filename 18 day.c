#include<conio.h>
#include<stdio.h>
#include<math.h>
main()
{int n;
while(1){
printf("Enter any number:");
scanf("%d",&n);
if (n>7)
n=n%7;
 if (n==1)
    printf("sunday\n\n");
else if(n==2)
     printf("Monday\n\n");
else if(n==3)
     printf("Tuesday\n\n");
else if(n==4)
     printf("wednesday\n\n");
     else if(n==5)
     printf("Thursday\n\n");
     else if(n==6)
     printf("Friday\n\n");
     else if(n==7)
     printf("Saturday\n\n");
     else
     {printf("wrong input please enter correct number\n\n");
     break;}
getch();




}}




