#include<stdio.h>  
#include<graphics.h>  
#include<dos.h>  
#include<conio.h>  
void floodfill(int x,int y,int old,int newcol)  
{  
                int current;  
                current=getpixel(x,y);  
                if(current==old)  
                {  
                                delay(5);  
                                putpixel(x,y,newcol);  
                                floodfill(x+1,y,old,newcol);  
                                floodfill(x-1,y,old,newcol);  
                                floodfill(x,y+1,old,newcol);  
                                floodfill(x,y-1,old,newcol);  
                                floodfill(x+1,y+1,old,newcol);  
                                floodfill(x-1,y+1,old,newcol);  
                                floodfill(x+1,y-1,old,newcol);  
                                floodfill(x-1,y-1,old,newcol);  
                }  
}  
void main()  
{  
                int gd=DETECT,gm;  
                initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");  
                rectangle(50,50,150,150);  
                floodfill(70,70,0,15);  
                getch();  
                closegraph();  
}  