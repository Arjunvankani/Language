#include<stdio.h>>
#include<graphics.h>
#include<conio.h>
#include<math.h>
#include<dos.h>

void main()
{
	int gd = DETECT,gm;
	int i,x1,y1,x2,y2,dx,dy,steps,xi,yi;
	initgraph(&gd,&gm, "C:/TURBOC3/BGI");
	printf("Enter values of x1 and y1 \n");
	scanf("%d %d",&x1,&y1);
	printf("Enter values of x2 and y2 \n");
	scanf("%d %d",&x2,&y2);
	dx=x2-x1;
	dy=y2-y1;
	if(abs(dx) > abs(dy))
	    {	steps = abs(dx); }
	else
	     {	steps = abs(dy);  }
	xi = dx/steps;
	yi = dx/steps;
	for(i=0;i<steps;i++)
	{
		putpixel(x1,y1,2);
		x1=x1+xi;
		y1=y1+yi;
	}
	getch();
	closegraph();

}