#include <conio.h>
#include <graphics.h>
#include <math.h>
#include <stdio.h>

#define PI 3.141592654

typedef float matrix[3][3];
matrix initialmatrix;
enum axis {xaxis, yaxis};
void unit_matrix(matrix m)
{
 int r,c;
 for (r=0; r<3; r++)
  for (c=0; c<3; c++)
   m[r][c] = (r==c);
}
void matrixmultiply(matrix a, matrix b)
{
 int r,c;
 matrix tmp;
 for (r=0; r<3; r++)
   for (c=0; c<3; c++)
    tmp[r][c] = a[r][0]*b[0][c] + a[r][1]*b[1][c] + a[r][2]*b[2][c];
 for (r=0; r<3; r++)
   for (c=0; c<3; c++)
   b[r][c] = tmp[r][c];
}
void mirror2d(axis a)
{
	matrix m;
	unit_matrix(m);
	switch (a)
	{
		case xaxis:
			m[1][1] = - 1;
			break;
		case yaxis:
			m[0][0] = - 1;
			break;
	}
	matrixmultiply(m, initialmatrix);
}
void translate2d(float tx, float ty)
{
 matrix m;
 unit_matrix(m);
 m[0][2] = tx; m[1][2] = ty;
 matrixmultiply(m, initialmatrix);
}
void scale2d(float sx, float sy)
{
 matrix m;
 unit_matrix(m);
 m[0][0] = sx;
 m[1][1] = sy;
 matrixmultiply(m, initialmatrix);
}
void rotate2d(float radianangle)
{
 matrix m;
 unit_matrix(m);
 m[0][0] = cos(radianangle);
 m[1][0] = sin(radianangle);
 m[0][1] = - sin(radianangle);
 m[1][1] = cos(radianangle);
 matrixmultiply(m, initialmatrix);
}
void main(void)
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:/TURBOC3/BGI");
 float rotateangle = 45 * PI/180;
 //Defining initialmatrix, a triangle
 initialmatrix[0][0] = 30; initialmatrix[0][1] = 50; initialmatrix[0][2] = 40;
 initialmatrix[1][0] = 40; initialmatrix[1][1] = 50; initialmatrix[1][2] = 70;
 initialmatrix[2][0] = 10; initialmatrix[2][1] = 10; initialmatrix[2][2] = 10;
 setcolor(RED);
//Drawing initialmatrix (Triangle)
 line(initialmatrix[0][0],initialmatrix[1][0],initialmatrix[0][1],initialmatrix[1][1]);
 line(initialmatrix[0][1],initialmatrix[1][1],initialmatrix[0][2],initialmatrix[1][2]);
 line(initialmatrix[0][2],initialmatrix[1][2],initialmatrix[0][0],initialmatrix[1][0]);
//Wait for a keystroke
 getch();
//2D Operations
//Refer Solved example 4 - 9
//Translate so that the line passes through the origin
 translate2d(7, 0);
//Rotate so that the line becomes coincident with x axis
 rotate2d(rotateangle);
//Mirror about x axis
 mirror2d(xaxis);
//Rotate back to initial status
 rotate2d(- rotateangle);
//Translate back the line to initial status
 translate2d(2, 0);
//Print the final Matrix
 for (int i=0;i<3;i++)
  printf("\t³%f\t%f\t%f³\n", initialmatrix[0][i], initialmatrix[1][i], initialmatrix[2][i]);
//Translating and Magnifying at the centre of the screen for proper visualization
//of transformed triangle and displaying the transformed initialmatrix
 scale2d(20, 20);
 translate2d(getmaxx()/2, getmaxy()/2);
 setcolor(GREEN);
 line(initialmatrix[0][0],initialmatrix[1][0],initialmatrix[0][1],initialmatrix[1][1]);
 line(initialmatrix[0][1],initialmatrix[1][1],initialmatrix[0][2],initialmatrix[1][2]);
 line(initialmatrix[0][2],initialmatrix[1][2],initialmatrix[0][0],initialmatrix[1][0]);
 getch();
}
