#include <graphics.h>

#include <conio.h>

void flood_fill(int seedx, int seedy, int fill_color, int old_color);

void main(void)

{

int gd=DETECT, gm;

initgraph(&gd, &gm,"c://TURBOC3//bgi");

int oldcolor = BLACK;

setcolor(YELLOW);

line(310,230,330,230);

setcolor(LIGHTGREEN);

line(330,230,330,250);

setcolor(MAGENTA);

line(330,250,310,250);

setcolor(CYAN);

line(310,250,310,230);

//Notice this green point will not be deleted

putpixel(321,241,GREEN);

flood_fill(320,240,LIGHTBLUE,oldcolor);

getch();

}

void flood_fill(int seedx, int seedy, int fill_color, int old_color)

{

if(getpixel(seedx,seedy)==old_color)

{

putpixel(seedx,seedy,fill_color);

flood_fill((seedx+1),seedy,fill_color,old_color);

flood_fill((seedx-1),seedy,fill_color,old_color);

flood_fill(seedx,(seedy+1),fill_color,old_color);

flood_fill(seedx,(seedy-1),fill_color,old_color);

//Diagonal pixels

flood_fill((seedx-1),(seedy-1),fill_color,old_color);

flood_fill((seedx+1),(seedy+1),fill_color,old_color);

flood_fill((seedx+1),(seedy-1),fill_color,old_color);

flood_fill((seedx-1),(seedy+1),fill_color,old_color);

}

}