#include<stdio.h>
#include<conio.h>

int fib(int n)
{
	if(n==0)
	{
		return 0;                       /* n=6  fib(5)+fib(4)
												5+3=8
										n=5 fib(4)+fib(3)
											 3+2=5
										n=4 fib(3)+fib(2)
											2+1=3
										n=3 fib(2)+fib(1)
										    1+1=2
										n=2 fib(1)+fib(0)
										     1+0=1	*/
	}
	else if(n==1)
	{
		return 1;
	}
	else
	{
		return (fib(n-1)+fib(n-2));
	}
}

int main()
{
	int n,result;
	printf("enter the digit to be found\n");
	scanf("%d",&n);
	result=fib(n);
	printf("value is %d",result);
	getch();
	
}
