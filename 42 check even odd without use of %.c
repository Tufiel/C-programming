#include<stdio.h>
#include<conio.h>
int main()
{int a=0,n=0,i;
char s[20];
system("color 3");
printf("enter a number:\n");

gets(s);
for(i=0;s[i];i++)
   {if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z')
    a=1;
if(s[i]>='0'&&s[i]<='9')
    n=1;}
    if(a==1&&n==1)
        printf("alphanumeric");
    else
        printf("not alphanumeric");
_getch();
}
