#include <conio.h>
#include <graphics.h>
#include <stdio.h>

typedef float matrix[3][3];
matrix initialmatrix;
//As the initialmatrix is of the form 3 x 3 only three points can be
//transformed at a time with this arrangement. If required program can be
//extended for 3(row) x num_pts(col.) matrix operation.
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
void main(void)
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:/TURBOC3/BGI");
 //Defining initialmatrix, a triangle
 initialmatrix[0][0] = 10; initialmatrix[0][1] = 22; initialmatrix[0][2] = 30;
 initialmatrix[1][0] = 40; initialmatrix[1][1] = 52; initialmatrix[1][2] = 54;
 initialmatrix[2][0] = 61; initialmatrix[2][1] = 71; initialmatrix[2][2] = 81;
 setcolor(YELLOW);
//Drawing initialmatrix (Triangle)
 line(initialmatrix[0][0],initialmatrix[1][0],initialmatrix[0][1],initialmatrix[1][1]);
 line(initialmatrix[0][1],initialmatrix[1][1],initialmatrix[0][2],initialmatrix[1][2]);
 line(initialmatrix[0][2],initialmatrix[1][2],initialmatrix[0][0],initialmatrix[1][0]);
//Wait for a keystroke
 getch();
//2D Transformation Operation
//For the given problem translating the reference point (10, 4) to the origin
 translate2d(-10, -4);
//Scaling with respect to the origin
 scale2d(4, 4);
//Bringing the reference point back to its place
 translate2d(10, 4);
//Print the final Matrix
 for (int i=0;i<3;i++)
  printf("\t³%f\t%f\t%f³\n", initialmatrix[0][i], initialmatrix[1][i], initialmatrix[2][i]);
//Translating to the centre of the screen for proper visualization
//of transformed triangle and displaying the transformed initialmatrix
 translate2d(getmaxx()/2, getmaxy()/2);
 setcolor(LIGHTBLUE);
 line(initialmatrix[0][0],initialmatrix[1][0],initialmatrix[0][1],initialmatrix[1][1]);
 line(initialmatrix[0][1],initialmatrix[1][1],initialmatrix[0][2],initialmatrix[1][2]);
 line(initialmatrix[0][2],initialmatrix[1][2],initialmatrix[0][0],initialmatrix[1][0]);
 getch();
}
