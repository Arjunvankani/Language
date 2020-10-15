#include<stdio.h>
#include<graphics.h>
#include<conio.h>

void main()
{
	int gd = DETECT , gm;
	initgraph(&gd, &gm, "C:/TURBOC3/BGI");

	arc(10, 50, 0, 30, 50);
	arc(40, 90, 0, 45, 50);
	arc(60, 150, 0, 60, 50);
	arc(70, 210, 0, 90, 50);
	arc(90, 350, 0, 180, 50);
	arc(420, 280, 0, 360, 50);
	getch();
	closegraph();
}