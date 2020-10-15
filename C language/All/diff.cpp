#include <graphics.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>
void main()
{
int gd=DETECT,gm;
int s;
int x1,x2,y1,y2;
char *lname[]={"SOLID LINE","DOTTED LINE","CENTER LINE",
"DASHED LINE","USERBIT LINE"};
initgraph(&gd,&gm,"C://TURBOC3//bgi");
clrscr();
cleardevice();
	 printf("\nEnter starting point (x1 ,y1):");
     scanf("%d %d",&x1,&y1);
     printf("\nEnter End point (x2,y2):");
     scanf("%d %d",&x2,&y2);
printf("Line styles:");
for (s=0;s<5;s++)
{setcolor(s+1);
setlinestyle(s,1,3);
line(x1,y1+s*50,x2,y2+s*50);

outtextxy(x2+20,y2+20+s*50,lname[s]);
}
getch();
closegraph();
}