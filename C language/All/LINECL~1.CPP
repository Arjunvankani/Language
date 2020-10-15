#include <graphics.h>
#include <conio.h>

//Macro to eliminate fractional part of a floating number
#define round(a) ((int)(a + 0.5))

#define TRUE  1
#define FALSE 0

//Structure for window coordinates
struct window_coordinates
	{
	float xmin, xmax, ymin, ymax;
	};
//Structure for any line coordinates
struct line_coordinates
	{
	float x1, y1, x2, y2;
	};

int clip_line(window_coordinates wc, line_coordinates &lc);
int check_line(float d, float q, float &u1, float &u2);

void main(void)
{
	int driver=DETECT, mode;
	initgraph(&driver, &mode, "C:/TURBOC3/BGI");
//Declaring Window Coordinates
	window_coordinates win;
	win.xmin = 100; win.xmax = 540;
	win.ymin = 100; win.ymax = 380;
//Declaring Line coordinates which is to be clipped against the window
	line_coordinates lc;
	lc.x1 = 120; lc.y1 = 12;
	lc.x2 = 300; lc.y2 = 390;
//Drawing the window boundaries
	setcolor(YELLOW);
	rectangle(win.xmin, win.ymin, win.xmax, win.ymax);
//Drawing the Initial line
	setcolor(LIGHTGREEN);
	line(lc.x1,lc.y1,lc.x2,lc.y2);

	getch();
	setcolor(LIGHTRED);
//Drawing the final clipped line after clipping with circle at its ends.
	if(clip_line(win, lc))
	{
		line(round(lc.x1),round(lc.y1),round(lc.x2),round(lc.y2));
		circle(round(lc.x1),round(lc.y1),4);
		circle(round(lc.x2),round(lc.y2),4);
	}
	getch();
}
//Subroutine for Main Clipping Algorithm
int clip_line(window_coordinates win, line_coordinates &lc)
{
	float u1 = 0;	//umax
	float u2 = 1;	//umin

	float dx = lc.x2-lc.x1;
	float dy = lc.y2-lc.y1;

	float d1 = -dx;
	float d2 = dx;
	float d3 = -dy;
	float d4 = dy;

	float q1 = lc.x1 - win.xmin;	//Left Edge
	float q2 = win.xmax - lc.x1;	//Right Edge
	float q3 = lc.y1 - win.ymin;	//Bottom Edge
	float q4 = win.ymax - lc.y1;	//Top Edge

	if(check_line(d1,q1,u1,u2) && check_line(d2,q2,u1,u2) &&
		     check_line(d3,q3,u1,u2) && check_line(d4,q4,u1,u2))
	{
		if(u2 < 1)
		{
			lc.x2 = lc.x1 + (u2*dx);
			lc.y2 = lc.y1 + (u2*dy);
		}
		if(u1 > 0)
		{
			lc.x1+= u1*dx;
			lc.y1+= u1*dy;
		}
	return TRUE;
	}
 return FALSE;
}
//Subroutine for Trivial rejection test and finding the maximum of the lower
//sets of parameter value and minimum of maximum sets of parameter values
int check_line(float d, float q, float &u1, float &u2)
{
	int visible = TRUE;
	float u = q/d;
	if(d < 0)			//look for upper limit
		{
		if(u > u2)              //check for trivially invisible
			visible = FALSE;
		else if (u > u1)	//find the minimum of the maximum
			u1 = u;
		}
       else if(d > 0)                   //look of lower limit
		{
		if(u < u1)              //check for trivially invisible
			visible = FALSE;
		else if (u < u2)	//find the maximum of the minimum
			u2 = u;
		}
       else
		{
		if(q < 0)		//line is outside
		visible = FALSE;
		}
 return visible;
}
