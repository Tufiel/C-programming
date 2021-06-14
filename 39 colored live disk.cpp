#include<stdio.h>
#include<conio.h>
#include<graphics.h>
main()
{int i,j,gd=DETECT,gm;
initgraph(&gd,&gm,"");
for(i=0;i<220;i++)
    for(j=0;j<16;j++)
{setcolor(j);
delay(400);
line(220,200,380,200);
line(250,300,300,150);
line(300,150,350,300);
line(350,300,220,200);
line(380,200,250,300);}
getch();
closegraph();

}
//-lbgi -lgdi32 -lcomdlg32 -luuid -loleaut32 -lole32
