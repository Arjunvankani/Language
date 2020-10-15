#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#include<math.h>
#include<stdlib.h>
void main()
{
int gm,gd=DETECT,midx,midy,c;
float x1,x2,x3,y1,y2,y3,x11,x22,x33,y11,y22,y33,sfx,sfy,tpx,tpy,ang,t,a,b;
clrscr();
initgraph(&gd,&gm,"C:/TURBOC3/BGI");
midx=getmaxx()/2;
midy=getmaxy()/2;
line(midx,0,midx,getmaxy());
line(0,midy,getmaxx(),midy);
printf("2D Translation, Rotation and Scaling\n");
printf("Enter the points (x1,y1), (x2,y2) and (x3,y3) of triangle\n");
scanf("%f%f%f%f%f%f",&x1,&y1,&x2,&y2,&x3,&y3);
setcolor(WHITE);
line(midx+x1,midy-y1,midx+x2,midy-y2);
line(midx+x2,midy-y2,midx+x3,midy-y3);
line(midx+x3,midy-y3,midx+x1,midy-y1);
printf("\n 1.Transaction\n 2.Rotation\n 3.Scalling\n 4.exit\n");
a:  printf("Enter your choice:");
scanf("%d",&c);
switch(c)
{
case 1:
printf("Enter the translation factor\n");
scanf("%f%f",&tpx,&tpy);
x11=x1+tpx;
y11=y1+tpy;
x22=x2+tpx;
y22=y2+tpy;
x33=x3+tpx;
y33=y3+tpy;
setcolor(RED);
line(midx+x11,midy-y11,midx+x22,midy-y22);
line(midx+x22,midy-y22,midx+x33,midy-y33);
line(midx+x33,midy-y33,midx+x11,midy-y11);
break;

case 2:
printf("Enter the angle of rotation\n");
scanf("%f",&ang);
printf("Enter rotetion point\n");
scanf("%f%f",&a,&b);
t=3.14*ang/180;
x11=abs(x1*cos(t)-y1*sin(t)+a*(1-cos(t))+b*sin(t));
y11=abs(x1*sin(t)+y1*cos(t)+b*(1-cos(t))-a*sin(t));
x22=abs(x2*cos(t)-y2*sin(t)+a*(1-cos(t))+b*sin(t));
y22=abs(x2*sin(t)+y2*cos(t)+b*(1-cos(t))-a*sin(t));
x33=abs(x3*cos(t)-y3*sin(t)+a*(1-cos(t))+b*sin(t));
y33=abs(x3*sin(t)+y3*cos(t)+b*(1-cos(t))-a*sin(t));
setcolor(BLUE);
line(midx+x11,midy-y11,midx+x22,midy-y22);
line(midx+x22,midy-y22,midx+x33,midy-y33);
line(midx+x33,midy-y33,midx+x11,midy-y11);
break;
case 3:
printf("Enter the scalling factor\n");
scanf("%f%f",&sfx,&sfy);
printf("Enter scaling point\n");
scanf("%f%f",&a,&b);
x11=x1*sfx+a*(1-sfx);
y11=y2*sfy+b*(1-sfy);
x22=x2*sfx+a*(1-sfx);
y22=y2*sfy+b*(1-sfy);
x33=x3*sfx+a*(1-sfx);
y33=y3*sfy+b*(1-sfy);
setcolor(YELLOW);
line(midx+x11,midy-y11,midx+x22,midy-y22);
line(midx+x22,midy-y22,midx+x33,midy-y33);
line(midx+x33,midy-y33,midx+x11,midy-y11);
break;

case 4:
exit(0);
break;

default:
printf("Enter the correct choice\n");
}
goto a;
getch();
}