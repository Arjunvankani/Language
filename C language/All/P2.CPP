#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,a[20],n;
	clrscr();
	printf("Enter no of element ....\n");
	scanf("%d",&n);
	printf("Enter the values..\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Location of the element to be deleted...\n");
	scanf("%d",&j);
	while(j<n)
	{
	a[j-1]=a[j];
	j++;
	}
	n--;
	for(i=0;i<n;i++)
	{
	printf("\n %d",a[i]);
	}
	getch();
}