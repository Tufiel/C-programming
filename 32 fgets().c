#include<conio.h>
#include<stdio.h>
#include<math.h>
main()
{FILE *p;
char s[1000];
p=fopen("new.txt","r");
if (p==NULL)
{printf("file not found");
exit(1);
}
fgets(s,90,p);
printf("%s",s);
fclose(1);

}
