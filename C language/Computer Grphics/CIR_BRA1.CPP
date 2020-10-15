#include<stdio.h>
#include<dos.h>
#include<conio.h>
#include<graphics.h>
void drawCir(int xr,int yr,int x,int y)
{
	putpixel(xr+x, yr+y,  1);
	putpixel(xr-x, yr+y,  2);
	putpixel(xr+x, yr-y,  3);
	putpixel(xr-x, yr-y,  4);
	putpixel(xr+y, yr+x,  5);
	putpixel(xr-y, yr+x,  6);
	putpixel(xr+y, yr-x,  7);
	putpixel(xr-y, yr-x,  8);
}
void circleAlgo(int xr,int yr, int r)
{
	int x = 0, y = r;
	int d = 3 - 2 * r;
	drawCir(xr,yr,x,y);
	while(y >= x)
	{
	    x++;

	    if(d > 0)
	    {
		y--;
		d = d + 4* (x-y) + 10;
	    }
	    else
	    {
		d = d + 4 * x + 6;
	    }
	    drawCir(xr,yr,x,y);
	    delay(100);
	}

}

int main()
{
	int xr = 50, yr = 50, r2 = 30;
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "C:/TURBOC3/BGI");
	circleAlgo(xr,yr,r2);
	getch();
	return 0;
}