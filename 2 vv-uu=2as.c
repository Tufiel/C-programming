#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{char a[200],b[200];
int i=0,j=0,k,t=0;
printf("Enter a sentence:");
gets(a);

while(a[i]){
for(i;a[i]==' ';i++);//runs up first word reached actually its if there are spaces before starting
for(i;a[i]!=' '&& a[i]!='\0';i++,j++)//runs up to end of starting  word and not up to null char
   {b[j]=a[i];}
if(a[i]=='\0'&&b[j-1]==' ')
j--;

b[j]=a[i];
j++;
}
i=0;k=1;
while(b[i])
{if(b[i]==' ')
        k++;
        i++;}
puts(b);
printf("no of words:%d",k);
}


