#include<stdio.h>

int main()
{
int i=1;
	for(i=i++;i<=10;i++)
	    {	if(i==5)
	       {	continue;
			printf( "%d ",i);
		}
		i++;
	    }
	    return 0;


}