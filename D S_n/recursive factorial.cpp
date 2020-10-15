#include<stdio.h>
#include<conio.h>

int fact(int n)
{

if(n==0)
{
	return 1;
}												/* n=5 5*fact(4)
														5*24=120
													n=4 4*fact(3)
														4*6=24
													n=3 3*fact(2)
														3*2=6
													n=2 2*fact(1)
														2*1=2
													n=1 1*fact(0)
														1*1=1 */
else
{
	return n*fact(n-1);
}
}
int main()
{
	int n,result;
	printf("enter number to find factorial\n");
	scanf("%d",&n);
	result=fact(n);
	printf("factorial is %d",result);
	
}
