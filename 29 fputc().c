#include<conio.h>
#include<stdio.h>
#include<math.h>
main()
{FILE *p;
int i;
char s[100];
p=fopen("new.txt","w");
if (p==NULL)
{printf("file not found");
exit(1);
}
printf("enter a string");
gets(s);
for(i=0;i<10000;i++)
fputs(s,p);
fclose(p);

}
