#include<stdio.h>
#include<conio.h>
#include<string.h>


main()
{char a[200],s[10];
int i,j,k;
printf("Enter a string:");
gets(a);
printf("Enter a string to be searched:");
gets(s);
for(i=0;i<a[i+strlen(s)-1];i++)
{k=i;
    for(j=0;j<strlen(s);j++,i++)
    {if(a[k]!=s[j])
        break;
        k++;
    }
if(j==strlen(s))
    {printf("at %d to %d",i-strlen(s)+1,i);
goto a;}

}

    printf("not found");
a:
    _getch();
}

