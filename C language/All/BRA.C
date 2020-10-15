#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
void main()
{
	int gd=DETECT,gm,i,m,dx,dy,xn,yn,x1,x2,y1,y2;
	initgraph(&gd,&gm,"C:/TURBOC3/BGI");
	printf("Enter values of x1 and y1 \n");
	scanf("%d %d",&x1,&y1);
	printf("Enter values of x2 and y2 \n");
	scanf("%d %d",&x2,&y2);
	dx = x2-x1;
	dy = y2-y1;
	xn = x1;
	yn = y1;
	for(i = 1;i<=dx;i++)
	{
		putpixel(xn,yn,1);
		delay(50);
		while(m>=0)
		{
			yn = yn+1;
			m = m - 2*dx;

		}
		xn = xn+1;
		m = m+2*dy;
	}
	getch();
	closegraph();
}
