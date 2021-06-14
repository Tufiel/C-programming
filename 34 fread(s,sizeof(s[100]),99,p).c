#include<conio.h>
#include<stdio.h>
#include<math.h>
main()
{FILE *p;
int i;
char s[100];
p=fopen("new.txt","rb");
if (p==NULL)
{printf("file not found");
exit(1);
}
fread(s,sizeof(s[100]),99,p);

{printf("%s",s);}


fclose(p);

}
