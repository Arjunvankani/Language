#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("enter 2 values:\n");
	scanf("%d%d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("swapped %d %d",a,b);
	getch();
}
