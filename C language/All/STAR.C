#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>

main()
{
	int gd = DETECT, gm,i,x,y;
	char ch[5];
	initgraph(&gd, &gm, "C:/TURBOC3/BGI");
	while(!kbhit()){

	for(i=1; i<500;i++)
	{
	      x =  rand()%getmaxx();
	      y =  rand()%getmaxy();
	      putpixel(x,y,15);
	}
	delay(1000);
	cleardevice();
	}
	getch();
	closegraph();
}