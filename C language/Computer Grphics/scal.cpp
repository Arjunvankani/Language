#include<iostream.h>
#include<graphics.h>
#include<math.h>
#include<conio.h>
#include<dos.h>

//function declarations
void mul(int mat[3][3],int vertex[10][3],int n);
void scale(int vertex[10][3],int n);
void init(int vertex[10][3],int n);


int main()
{
  int i,x,y;
  int vertex[10][3],n;
  
  //clear the screen
  clrscr();
  
  //taking inputs for the polygon object
  cout<<"\nEnter the no. of vertex : ";
  cin>>n;
   for(i=0;i<n;i++)
     {
	    cout<<"Enter the points (x,y): ";
	    cin>>x>>y;
	    vertex[i][0]=x;
	    vertex[i][1]=y;
	    vertex[i][2]=1;
     }
	  
	  
	 //calling the scale() function to perform scaling of the given object 
     scale(vertex,n);
	 
	 getch();
	 return 0;
}

/*
Function definition for init()

Function: init(). This function initialises the screen in graphics mode and loads the appropriate graphics driver.
          It also draws the co-ordinate axes,legends, and the image of the given object matrix.
                  
Input: 1) Object matrix (to be scaled later)
       2) Number of vertices(rows in object matrix)  

Returns: This function does not return anything

*/

void init(int vertex[10][3],int n)
{
   //initialisation of the graphics driver
   int gd=DETECT,gm,i;
   initgraph(&gd,&gm,"C:\\turboc3\\bgi");
   
   //drawing the co-ordinate axes
   setcolor(10);                 
   line(0,240,640,240);       //drawing X axis
   line(320,0,320,480);       //drawing Y axis
   
   
   //drawing graph legends
   setcolor(3);
   line(450,20,490,20);
   setcolor(15);
   line(450,50,490,50);
   setcolor(6);
   outtextxy(500,20,"Original");
   outtextxy(500,50,"Transformed");
     
   //drawing the object
   setcolor(3);

   for(i=0;i<n-1;i++)
    {
       line(320+vertex[i][0],240-vertex[i][1],320+vertex[i+1][0],240-vertex[i+1][1]);
     }
     line(320+vertex[n-1][0],240-vertex[n-1][1],320+vertex[0][0],240-vertex[0][1]);

}



/*
Function definition for mul()

Function: mul().This function multiplies the two given matrices(object matrix and scaling transformation matrix)
          and then draws the final image.
		                    
Input: 1) scaling transformation matrix
       2) Object matrix (to be scaled)
       3) Number of vertices (number of rows in object matrix)
	   
Returns: This function does not return anything

*/

void mul(int mat[3][3],int vertex[10][3],int n)
{
  int i,j,k;    // loop variables
  
  //array for storing final image matrix
 int res[10][3];
  
  
  //multiplying the object matrix with scaling transformation matrix
  for(i=0;i<n;i++)
   {
     for(j=0;j<3;j++)
      { 
	     res[i][j]=0;
         for(k=0;k<3;k++)
	      {
	         res[i][j] = res[i][j] + vertex[i][k]*mat[k][j];
	       }
     }
   }
   
   
   //drawing the transformed image (scaled object)
   setcolor(15);
   for(i=0;i<n-1;i++)
    {
       line(320+res[i][0],240-res[i][1],320+res[i+1][0],240-res[i+1][1]);
     }
     line(320+res[n-1][0],240-res[n-1][1],320+res[0][0],240-res[0][1]);

}



/*
Function definition for scale()

Function: scale(). This function scales the given object in the desired direction to the desired
          size and displays the transformed image. Number of times to scale the given object
		  is taken from the user.

Inputs: 1)Object matrix
        2)Number of vertices in the object

Returns: This function does not return anything

*/

void scale(int vertex[10][3],int n)
{  
   //scaling transformation matrix
   int scale_array[3][3];
   
   int x,y;
   
   //taking user input for shear direction  
   cout<<"\nEnter scale factor in X direction: ";
   cin>>x;
   cout<<"Enter scale factor in Y direction: ";
   cin>>y;
   
   
   //initializing the scaling transformation matrix as per the required dimension
   
		 scale_array[0][0]=x;
	     scale_array[1][0]=0;
	     scale_array[2][0]=0;
	     scale_array[0][1]=0;
	     scale_array[1][1]=y;
	     scale_array[2][1]=0;
	     scale_array[0][2]=0;
	     scale_array[1][2]=0;
	     scale_array[2][2]=1;

		 //initializing the graphics mode and drawing the original object
	     init(vertex,n);
		 
		 //multiplying the object with scaling transformation matrix and displaying the scaled image
	     mul(scale_array,vertex,n);
		 
 }