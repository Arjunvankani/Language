#include<stdio.h>
#include<conio.h>
int main()
{
clrscr();
int i=1;
	for(i=i++;i<=10;i++)
	   { if(i==5)
	     {	continue;
	    }	printf(" %d ", i);
	    i++;
	      }
	    getch();
	    return 0;
}