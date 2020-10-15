#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>

main()
{
	int gd = DETECT, gm,i,x,y;
	char ch[5];
	initgraph(&gd, &gm, "C:/TURBOC3/BGI");
	for(i=30;i<200;i++)
	{
		delay(100);
		setcolor(i/10);
		arc(getmaxx()/2,getmaxy()/2,0,180,i-10);
	}
	getch();
	closegraph();
}