#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>

main()
{
	int gd = DETECT, gm;
	int x1,x2,y1,y2;
	initgraph(&gd, &gm, "C:/TURBOC3/BGI");


	printf("Enter the corrdinate x1,y1");
	scanf("%d %d",&x1,&y1);
	printf("Enter the corrdinate x2,y2");
	scanf("%d %d",&x2,&y2);

	line(x1,y1,x2,y2);
	line(100,100,200,100);

	line(10,10,200,10);

	getch();
	closegraph();
	return 0;
}