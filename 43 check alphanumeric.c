#include<stdio.h>
#include<conio.h>
int main()
{char s[20];int i,l;
printf("enter a string:");
gets(s);
l=strlen(s);
for(i=0;i<l/2;i++)
 {

    if(s[i]!=s[l-i-1])
{printf("its not a palindrome\n");
break;}}
    if(i==l/2)
            printf("its palindrome\n");
_getch();
}
