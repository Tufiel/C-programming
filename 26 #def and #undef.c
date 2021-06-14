#include<conio.h>
#include<stdio.h>
#include<math.h>
main()
{FILE *p;
char a;
p=fopen("a.txt","w");
if(p==NULL)
{printf("cant open file");
exit(1);
}
gets(a);
fputc(a,p);


}
