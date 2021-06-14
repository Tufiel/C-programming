#include<conio.h>
#include<stdio.h>
#include<math.h>


main()
{int i;
FILE *p;
char s[100];
p=fopen("file1.txt","w");
printf("enter a string\n:");
gets(s);
if(p==NULL)
    {printf("CAnt open");
exit(1);}
for(i=0;i<99999;i++)
    fputs(s,p);
fclose(p);
getch();

}




