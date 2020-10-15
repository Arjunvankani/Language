#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int i,*p,n;
	printf("enter size of array\n");
	scanf("%d",&n);
	printf("enter elements of arary\n");
	p=(char*)malloc(n*sizeof(char));
	for(i=0;i<n;i++)
	{
		scanf(" %c",&p[i]);
	}
	
	printf("array is:\n");
	for(i=0;i<n;i++)
	{
		printf("%c\n",p[i]);
	}
	

	free(p);
	getch();
}
