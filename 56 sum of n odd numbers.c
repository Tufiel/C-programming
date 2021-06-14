#include<stdio.h>
#include<conio.h>
#include<windows.h>
void gotoxy(int x,int y)
{COORD c;
c.X=x;
c.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);

}
void main()
{int x=1,y=1;
 char n[100],c;
printf("Enter a sentence:");
gets(n);
printf("Use w,s,a,d  to move sentence up,down,left,right and space or enter to exit\n");
while(1){
    c=_getch();
    switch(c){

case 'w': gotoxy(x,y);
y--;break;
case 's':gotoxy(x,y);
y++;break;
case 'a': gotoxy(x,y);
x--;break;
case 'd':gotoxy(x,y);
x++;break;
case 13:exit(1);
case 32:exit(1);

    }
    system("cls");
gotoxy(x,y);
puts(n);
}






}
