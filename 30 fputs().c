#include<conio.h>
#include<stdio.h>
#include<math.h>
main()
{FILE *p;
int i;
char s[100];
p=fopen("new.txt","wb");
if (p==NULL)
{printf("file not found");
exit(1);
}
printf("enter a string");
gets(s);
fwrite(s,sizeof(s[100]),99,p);
fclose(p);

}
