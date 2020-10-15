#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>

main()
{
	int gd = DETECT, gm;
	int x1,x2,y1,y2;
	initgraph(&gd, &gm, "C:/TURBOC3/BGI");
	moveto(200,200);
	lineto(400,400);
	circle(50,50,15);
	ellipse(250,550,0,360,50,25);
	setcolor(LIGHTCYAN);
	circle(50,50,35);
	setcolor(LIGHTBLUE);
	circle(50,50,45);
	// setfillstyle(SOLID_FILL,11);
	// floodfill(100,101,RED);

	bar3d(135,95,200,400,20,5);
	setbkcolor(3);
	getch();
	setbkcolor(5);
	getch();
	setbkcolor(YELLOW);
	getch();
	setbkcolor(LIGHTBLUE);

	closegraph();
	}