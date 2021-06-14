#include<stdio.h>
#include<conio.h>
#include<graphics.h>
main()
{int gd=0,gm;

initgraph(&gd,&gm,"");
setcolor(1);
circle(100,80,30);
setcolor(2);
line(20,20,200,200);
setcolor(3);
ellipse(100,100,0,360,40,100);
getch();
closegraph();

}
//-lbgi -lgdi32 -lcomdlg32 -luuid -loleaut32 -lole32
