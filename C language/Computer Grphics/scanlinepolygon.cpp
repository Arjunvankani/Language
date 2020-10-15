#include <conio.h>

#include <graphics.h>

void Scanfill(float x1,float y1,float x2,float y2,float x3,float y3,float x4,float y4,int color);

void EdgeDetect(float x1,float y1,float x2,float y2,int *leftedge, int *rightedge);

void main(void)

{

int gd=DETECT,gm;

initgraph(&gd,&gm,"c:\\TURBOC3\\bgi");

float x1,y1,x2,y2,x3,y3,x4,y4,color;

x1=100.0;y1=50.0;

x2=150.0;y2=380.0;

x3=500.0;y3=400.0;

x4=550.0;y4=100.0;

color = 12;

Scanfill(x1,y1,x2,y2,x3,y3,x4,y4,color);

getch();

closegraph();

}

void EdgeDetect(float x1,float y1,float x2,float y2,int *leftedge, int *rightedge)

{

float mx; // x slope dx/dy

float x; // x pixel coordinate

int i; // looping variable

float temp;

if( (y2-y1) < 0 )

{

temp=y1; y1=y2; y2=temp;

temp=x1; x1=x2; x2=temp; //Swapping operations

}

if( (y2-y1) != 0)

mx = (x2-x1)/(y2-y1); // dx/dy

else

mx = (x2-x1); // dx

x = x1; //starting x coordinate

for(i=y1; i <= y2; i++)

{

if(x < (float)leftedge[i])

leftedge[i]=(int)x;

if(x > (float)rightedge[i])

rightedge[i]=(int)x;

x+=mx; //x = x + dx/dy

}

}

void Scanfill(float x1,float y1,float x2,float y2,

float x3,float y3,float x4, float y4,int color)

{

int leftedge[480];

int rightedge[480];

int y, i;

for(i=0;i<480;i++) //Initialization

{

leftedge[i]=640;

rightedge[i]=0;

}

EdgeDetect(x1,y1,x2,y2,leftedge, rightedge); //Detecting the edges of the triangle

EdgeDetect(x2,y2,x3,y3,leftedge, rightedge);

EdgeDetect(x3,y3,x4,y4,leftedge, rightedge);

EdgeDetect(x4,y4,x1,y1,leftedge, rightedge);

//Scan fill the horizontal scanlines

for(y=0;y<480;y++)

{

if(leftedge[y] <= rightedge[y])

for(i=(int)leftedge[y]; i < (int)rightedge[y]; i++)

putpixel(i,y,color);

}

}