
#include<graphics.h>
#include<stdlib.h>
#include<iostream.h>
#include<conio.h>
#include<dos.h>
void main()
{

   int gd = DETECT, gm;
   int xc=200,yc=200,x,y;
   float p;
   long rx,ry;
   initgraph(&gd,&gm,"C:/TURBOC3/BGI");
   cout<<"Enter x,y radius of ellipse: ";
   cin>>rx>>ry;

   //Region 1

   p=(rx*rx) + (ry*ry) - (rx*rx*ry) / 4;
   x=0;y=ry;
   while(2.0*(ry*ry*x) <= 2.0*(rx*rx*y))
   {
	if(p < 0)
	{
		x++;
		p = p+2*(ry*ry*x)+(ry*ry);
	}
	else
	{
		x++;y--;
		p = p+2*(ry*ry*x)-2*(rx*rx*y)-(ry*ry);
	}
	putpixel(xc+x,yc+y,2);
	line(xc,yc,xc+x,yc+y);
	putpixel(xc+x,yc-y,3);

	putpixel(xc-x,yc+y,4);

	putpixel(xc-x,yc-y,5);

   }

   //Region 2
   p=(ry*ry)*(x+0.5)*(x+0.5)+(rx*rx)*(y-1)*(y-1)-(rx*rx)*(ry*ry);
   while(y > 0)
   {
	if(p <= 0)
	{
		x++;y--;
		p = p+2*(ry*ry*x)-2*(rx*rx*y)+(rx*rx);
	}
	else
	{
		y--;
		p = p-2*(rx*rx*y)+(rx*rx);
	}
	putpixel(xc+x,yc+y,2);

	putpixel(xc+x,yc-y,3);

	putpixel(xc-x,yc+y,4);

	putpixel(xc-x,yc-y,5);
	delay(10);
   }
   getch();
   closegraph();
}