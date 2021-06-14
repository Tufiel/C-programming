#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{char a[100],b[100],l=0;int i;
printf("Enter a sentence:");
gets(a);
for(i=0;a[i]!='\0';i++)
    l++;
for(i=0;a[i]!='\0';i++)
   {
   strupr(a);
       b[i]=b[i]=a[l-i-1];
    printf("%c",b[i]);}







}

