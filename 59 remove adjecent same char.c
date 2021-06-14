#include<conio.h>
#include<stdio.h>
#include<string.h>

main()
{int j=0,i=1,k=0;
char s[100],t[100];
printf("Enter a sentence:");
gets(s);a:
for(i;s[i];i++)
    {
    if(s[i+1]==s[i])
    {i++;goto a;}
t[k]=s[i];
k++;

    }
puts(t);
_getch();
}
