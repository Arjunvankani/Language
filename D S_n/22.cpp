/*
#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5],sum=1,i,*p;
	printf("enter array values:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	p=a;
	for(i=0;i<5;i++)
	{
		sum=sum**p;
		*p++;
		
	}
	printf("%d",sum);
	getch();
	
	
}

#include<stdio.h>
#include<conio.h>
int main()
{
	int a=8,b=9,*x,*y;
	printf("before swapping: %d %d ",a,b);
	x=&a;
	y=&b;
	
	*x=*x+*y;
	*y=*x-*y;
	*x=*x-*y;
	printf("%d %d",a,b);
	getch();	
	
}
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char *str;
	printf("enter string:\n");
	gets(str);
	puts(str);
	getch();
	
}

#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5],i,*p;
	printf("enter array:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	p=&a[0];
	for(i=0;i<5;i++)
	{
		if(a[i]>*p)	
		{
			
			*p=a[i];
		}
	}
	printf("\nlarger number is %d",*p);
	getch();
}

#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char *str;
	int i;
	printf("enter string:\n");
	scanf("%s",str);
	
	for(i=0;*str!=NULL;i++)
	{
		*str++;
	}
	printf("length of string is %d",i);
	getch();
}*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void addition()
{
	int a,b,c;
	printf("enter two values:\n");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("add is %d",c);
	exit(0);
}
void substraction()
{
	int a,b,c;
	printf("enter two values:\n");
	scanf("%d%d",&a,&b);
	c=a-b;
	printf("sub is %d",c);
}
void multiplication()
{
	int a,b,c;
	printf("enter two values:\n");
	scanf("%d%d",&a,&b);
	c=a*b;
	printf("mul is %d",c);
}
void division()
{
	float a,b,c;
	printf("enter two values:\n");
	scanf("%f%f",&a,&b);
	c=a/b;
	printf("div is %f",c);
}
int main()
{
	int i, choice;
	
	
while(0)
	{
	
		printf("1.add\n 2.sub\n 3.mul\n 4.div\n 5.exit\n enter your choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				addition();
				break;
			case 2:
				substraction();
				break;
			case 3:
				multiplication();
				break;
			case 4:
				division();
				break;
			case 5:
				exit(0);
				break;
			default:
			printf("enter valid choice");	
			
		}
	}

	getch();
}
