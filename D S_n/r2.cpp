#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b;          
	printf("enter two numbers:");
	scanf("%d%d",&a,&b);
	if(a>b)			
	{
		printf("bigger number is %d",a);
	}
	if(b>a)
	{
		printf("%d",b);
	}
	getch();
}
