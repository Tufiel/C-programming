#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{char a[200],b[200];
int i,j=0,k,t=0;
printf("Enter a sentence:");
gets(a);
for(i=0;a[i]==' ';i++);
while(1){


    for(i;a[i]!=' '&&a[i]!='\0';j)
        {b[j]=a[i];
    i++;j++;
    if(a[i]==' ')
        goto s;
        if(a[i]=='\0')
            goto e;
    }
    if(0)
    {s:
        b[j]=a[i];
    j++;}
    if(0)
    {e:j--;
        for(j;b[j]==' ';j);
{j--;
        b[j]='\0';
break;}}

i++;}
for(j=0;b[j];j++)
printf("%c",b[j]);

printf("\nlen:%d",strlen(b));

}


