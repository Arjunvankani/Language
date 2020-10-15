#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<math.h>

typedef unsigned char BYTE;     // 0 to 255 or 0 to 1111-1111 i.e 0xFF

BYTE pointcheck(int x, int y);
BYTE bit1check(int p);
BYTE bit2check(int p);
BYTE bit3check(int p);
BYTE bit4check(int p);
int endprog(void);

int main (void)
{
	//Gaphics mode initialisation to 640x480 resolution
	int gd=VGA,gm=VGAHI;
	initgraph(&gd,&gm,"C:/TURBOC3/BGI");
	//Window Defined
	float x,y,xmin,ymin,xmax,ymax;
	xmax = 540; ymax = 380; xmin = 100; ymin = 100;
	//Line end points defined
	float xn1,xn2,yn1,yn2,x1,y1,x2,y2;
	int p1,p2;
	x1=120;y1=12;x2=300;y2=390;  //with less values of point 1
	//Draw Initial situation
	setcolor(1);
	rectangle(xmin,ymin,xmax,ymax);
	setcolor(2);
	line(x1,y1,x2,y2);
	//Program of clipping begins here
	//Bits are numbered as 1       1       1       1
	//		       ^Fourth ^Third  ^Second ^First

	float m = (y2-y1)/(x2-x1); //Slope Calculated
	//Getting binary conversion of points
	p1 = pointcheck(x1,y1);
	p2 = pointcheck(x2,y2);
	//Printing Line position
	int bit1,bit2,bit3,bit4;
	bit1=bit1check(p1);
	bit2=bit2check(p1);
	bit3=bit3check(p1);
	bit4=bit4check(p1);
	printf("Point p1 is %d = %d%d%d%d",p1,bit4,bit3,bit2,bit1);
	bit1=bit1check(p2);
	bit2=bit2check(p2);
	bit3=bit3check(p2);
	bit4=bit4check(p2);
	printf("\nPoint p2 is %d = %d%d%d%d",p2,bit4,bit3,bit2,bit1);
	//If the line lies outside exit program
	if (bit1check(p1)&bit1check(p2)==1) endprog();
	if (bit2check(p1)&bit2check(p2)==1) endprog();
	if (bit3check(p1)&bit3check(p2)==1) endprog();
	if (bit4check(p1)&bit4check(p2)==1) endprog();
	if 	(p1 == 0 & p2 == 0)
		{
		printf("\nLine lies within the window");
		getch();
		return 0;
		}
	else	printf("\nClipping......");
	//Clipping required from intersecting points. Calculating that..
	int pointcount = 0;
	if (pointcheck(x1,y1)==0)	//If it starts from within window
		{
		xn1 = x1; yn1 = y1;
		pointcount = pointcount + 1;
		p1 = p2;
		}
	if (bit1check(p1) == 1)  //it crosses xmin
		{
		x = xmin;
		y = y1 + m * (xmin - x1);
		putpixel(x,y,3);
		setcolor(3);
		circle(x,y,4);
		if (pointcount > 0)
			{
			xn2 = x; yn2 = y;
			}
		else    {
			xn1 = x; yn1 = y;
			pointcount = pointcount +1;
			}
		p1 = p2;
		}
	if (bit2check(p1) == 1) //it crosses xmax
		{
		x = xmax;
		y = y1 + m * (xmax - x1);
		putpixel(x,y,3);
		setcolor(3);
		circle(x,y,4);
		if (pointcount > 0)
			{
			xn2 = x; yn2 = y;
			}
		else    {
			xn1 = x; yn1 = y;
			pointcount = pointcount + 1;
			}
		p1 = p2;
		}
	if (bit3check(p1) == 1) //it crosses ymin
		{
		y = ymin;
		x = x1 + (ymin - y1)/m;
		putpixel(x,y,3);
		setcolor(3);
		circle(x,y,4);
		if (pointcount > 0)
			{
			xn2 = x; yn2 = y;
			}
		else    {
			xn1 = x; yn1 = y;
			pointcount = pointcount + 1;
			}
		p1 = p2;
		}
	if (bit4check(p1) == 1) //it crosses ymax
		{
		y = ymax;
		x = x1 + (ymax - y1)/m;
		putpixel(x,y,3);
		setcolor(3);
		circle(x,y,4);
		if (pointcount > 0)
			{
			xn2 = x; yn2 = y;
			}
		else 	{
			xn1 = x; yn1 = y;
			pointcount = pointcount + 1;
			}
		}
	getch();
	setcolor(0);
	line (x1,y1,x2,y2);
	setcolor(4);
	line (xn1,yn1,xn2,yn2);
	getch();
	closegraph();
}

int endprog(void)
{
	printf("\nLine lies outside the window");
	getch();
	closegraph();
	return 0;
}

//Function returns binary value of point location
BYTE pointcheck(int x, int y)
{
	//xmax = 540; ymax = 380; xmin = 100; ymin = 100;
	int val=0x00;
	if ((x - 100) < 0) val = val|0x01;	//make bit 1 --> 1
	if ((540 - x) < 0) val = val|0x02;	//make bit 2 --> 1
	if ((y - 100) < 0) val = val|0x04;	//make bit 3 --> 1
	if ((380 - y) < 0) val = val|0x08;      //make bit 4 --> 1
	return val;
}
//Subroutines for checking individual bit values
BYTE bit1check(int a)
{
	a = a & 1; 	//AND operation with 0001, making 2,3,4 bit 0
	return a;
}
BYTE bit2check(int b)
{
	b = b & 2;	//AND with 0010 i.e making 1,3,4 bit 0
	b = b >> 1;     //Right shift by 1 bit i.e cutting last digit
	return b;
}
BYTE bit3check(int c)
{
	c = c & 4;	//AND with 0100 i.e making 1,2,4 bit 0
	c = c >> 2;   	//Right shift 2 dights i.e cutting last two digit
	return c;
}
BYTE bit4check(int d)
{
	d = d >> 3;   	//Right shift 3 dights i.e cutting last three digit
	return d;
}
