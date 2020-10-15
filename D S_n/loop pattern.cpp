#include<stdio.h>
#include<conio.h>

int main()
{
	int row,col,i,n;
	printf("enter the number of rows to be printed:");
	scanf("%d",&n);
	for(row=0;row<n;row++)
	{
		for(col=0;col<=row;col++)
		{
			printf(" *");
		}
		printf("\n");
	}
	
	printf("enter the number of rows to be printed:");
	scanf("%d",&n);
	for(row=0;row<n;row++)
	{
		for(col=0;col<row-n;col++)
		{
			printf(" *");
		}
		printf("\n");
	}
		
	printf("enter the number of rows to be printed:");
	scanf("%d",&n);
	for(row=0;row<n;row++)
	{
		for(col=0;col<n-row;col++)
		{
			printf(" *");
		}
		printf("\n");
	}
	
	getch();
}
