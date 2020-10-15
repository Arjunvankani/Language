#include <graphics.h>
#include <conio.h>

void boundary_fill(int seedx, int seedy,int fill_color,int boundary_color);

void main(void)
{
	int gd=DETECT, gm;
	initgraph(&gd, &gm,"c://tc//bgi");

	setcolor(WHITE);
	//Notice this red point will be deleted
	putpixel(310,230,RED);
	circle(320,240,40);
	boundary_fill(320,240,LIGHTGREEN,WHITE);

	getch();
}

void boundary_fill(int seedx,int seedy, int fill_color, int boundary_color)
{
	if(getpixel(seedx, seedy)!=boundary_color && getpixel(seedx, seedy)!=fill_color)
		{
			putpixel(seedx, seedy,fill_color);
			boundary_fill((seedx+1),seedy,fill_color,boundary_color);
			boundary_fill((seedx-1),seedy,fill_color,boundary_color);
			boundary_fill(seedx,(seedy+1),fill_color,boundary_color);
			boundary_fill(seedx,(seedy-1),fill_color,boundary_color);
		}
}
