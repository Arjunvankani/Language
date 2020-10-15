#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>

main()
{
	int gd = DETECT, gm;
	int x1,y1,x2,y2;
	int left=100,top=100,right=200,bottom=200,x=300,y=150,rad=50;

	initgraph(&gd, &gm, "C:/TURBOC3/BGI");


	printf("\n\n\n\n\n");
	rectangle(left,top,right,bottom);
	circle(x,y,rad);
	bar(left+300, top, right+300, bottom);
	line(left-10,top+150, left+410, top+150);
	ellipse(x, y+200, 0, 360,100,50);
	outtextxy(left+100, top+325,"C graphics program");
	getch();
	closegraph();
	return 0;

	}