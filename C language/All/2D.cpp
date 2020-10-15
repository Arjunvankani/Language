#include "Stdio.h"
#include "conio.h"
#include "math.h"
#include "graphics.h"
#include "stdlib.h"

void intgraph();
void display_cordinate(char bg_color,char line_color);
int Create_poly(int poly[][2]);
void fill_poly(int poly[][2],int points,char line_color,char fill_color);
void Identity(float Matrix[3][3]);
void Translate_to_Relative(int poly[][2],int points,int Xdis,int Ydis);

void main()
{
    int poly[3][2],i,points,Xdis,Ydis;
    float Sx,Sy,Matrix[3][3],temp,Cos,Sin;
    char ch;
    intgraph();

    setfillstyle(8,RED);
    points=Create_poly(poly);
    display_cordinate(DARKGRAY,WHITE);
    fill_poly(poly,points,WHITE,RED);

    getch();
    Identity(Matrix);
    Xdis=0-poly[0][0];
    Ydis=0-poly[0][1];

    Translate_to_Relative(poly,points,Xdis,Ydis);

   Menu:
      restorecrtmode();
      do
      {
	 clrscr();
	 printf("================================");
	 printf("1. Scaling\n");
       printf("2. Translation\n");
       printf("3. Rotation\n");
       printf("4. Reflection [ X axis ]\n");
       printf("5. Reflection [ Y axis ]\n");
       printf("6. Reflection [ X=Y axis ]\n");
       printf("7. Draw\n ");
       printf("8. EXIT \n");
       printf("================================");
	 printf("Choose Ur Destiny:- ");
	 ch=getche();
      }while((ch<'1')||(ch>'8'));

      switch(ch)
      {
	 case '1':
	    printf("Enter Scaling Ratio:- ");
	    printf("Sx:- ");
	    scanf("%f",&Sx);
	    printf("Sy:- ");
	    scanf("%f",&Sy);
	    for(i=0;i<3;i++)
	    {
	       Matrix[i][0]=Matrix[i][0]*Sx;
	       Matrix[i][1]=Matrix[i][1]*Sy;
	    }
	    goto Menu;

	 case '2':
	    printf("Enter Translation [Relative]:- ");
	    printf("Tx:- ");
	    scanf("%f",&Sx);
	    printf(" Ty:- ");
	    scanf("%f",&Sy);

	    Matrix[2][0]=Matrix[2][0]+Sx;
	    Matrix[2][1]=Matrix[2][1]+Sy;

	    goto Menu;

	 case '3':
	    printf("Enter Rotation Angle [Degree]:- ");
	    scanf("%f",&Sx);

	    Sx=(Sx*3.14)/180;
	    Cos=cos(Sx);
	    Sin=sin(Sx);
	    for(i=0;i<=2;i++)
	    {
	       temp=Matrix[i][0]*Cos-Matrix[i][1]*Sin;
	       Matrix[i][1]=Matrix[i][0]*Sin+Matrix[i][1]*Cos;
	       Matrix[i][0]=temp;
	    }
	    goto Menu;

	 case '4':
	    Matrix[1][1]=Matrix[1][1]*-1;
	    printf("Done");
	    getch();

	    goto Menu;

	 case '5':
	    Matrix[0][0]=Matrix[0][0]*-1;
	    printf("Done");
	    getch();

	    goto Menu;

	 case '6':
	    Matrix[0][1]=1;
	    Matrix[1][1]=1;
	    printf(" Done");
	    getch();
	    goto Menu;

	 case '7':
	    for(i=0;i<=points;i++)
	    {
	       temp=poly[i][0]*Matrix[0][0]+poly[i][1]*Matrix[1][0]+Matrix[2][0];
	       poly[i][1]=poly[i][0]*Matrix[0][1]+poly[i][1]*Matrix[1][1]+Matrix[2][1];
	       poly[i][0]=temp;
	    }
	    goto Menu;

	 case '8':
	    getch();
	    closegraph();
	    exit(0);
      }
      setgraphmode(2);
      display_cordinate(DARKGRAY,WHITE);
      Translate_to_Relative(poly,points,-Xdis,-Ydis);
      fill_poly(poly,points,CYAN,RED);
      getch();
      restorecrtmode();
      do
      {
	 clrscr();
	 printf("Do you Want to Switch to MENU [Y|N]:- ");
	 ch=getche();
      }while( (ch!='Y') && (ch!='N') );
      if(ch=='Y')
      {
	 Identity(Matrix);
	 Xdis=0-poly[0][0];
	 Ydis=0-poly[0][1];

	 Translate_to_Relative(poly,points,Xdis,Ydis);
	 goto Menu;
      }
      closegraph();
   }

   void intgraph()
   {
      int g=DETECT,d;
      initgraph(&g,&d,"C:/TURBOC3/BGI");
   }

   void fill_poly(int poly1[][2],int points,char line_color,char fill_color)
   {
      int pol[20],i;
      char str[2];
      for(i=0;i<=points;i++)
      {
	 pol[i*2]=poly1[i][0];
	 pol[i*2+1]=poly1[i][1];
      }
      pol[i*2]=poly1[0][0];
      pol[i*2+1]=poly1[0][1];

      setcolor(line_color);
      setfillstyle(8,fill_color);
      fillpoly(points+1,pol);

      setcolor(fill_color);
      settextstyle(1,0,3);
      for(i=0;i<=points;i++)
      {
	 sprintf(str,"%c",i+'a');
	 outtextxy(poly1[i][0],poly1[i][1],str);
      }
   }

   void Identity(float Matrix[3][3])
   {
      int i,j;
      for(i=0;i<=2;i++)
      {
	 for(j=0;j<=2;j++)
	 {
	    if(i==j)
	       Matrix[i][j]=1;
	    else
	       Matrix[i][j]=0;
	 }
      }
   }
   int Create_poly(int poly[][2])
   {
      poly[0][0]=200;
      poly[0][1]=20;

      poly[1][0]=300;
      poly[1][1]=150;

      poly[2][0]=130;
      poly[2][1]=280;

      return 2;
   }

   void display_cordinate(char bg_color,char line_color)
   {
      int i;
      setbkcolor(bg_color);
      setcolor(line_color);
      for(i=0;i<=640;i+=50)
      {
	 line(i,0,i,480);
      }

      for(i=0;i<=480;i+=50)
      {
	 line(0,i,640,i);
      }
      rectangle(0,0,639,479);
   }

   void Translate_to_Relative(int poly[][2],int points,int Xdis,int Ydis)
   {
      int i;
      for(i=0;i<=points;i++)
      {
	 poly[i][0]=poly[i][0]+Xdis;
	 poly[i][1]=poly[i][1]+Ydis;
      }
   }
