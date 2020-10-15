// write a program to check greater value from the given values.
#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b;   
	printf("enter two values:");
	scanf("%d%d",&a,&b);
	//			true:false
	(b>a)?printf("bigger number is %d",b):printf("bigger number is %d",a);
	getch();
	
}
