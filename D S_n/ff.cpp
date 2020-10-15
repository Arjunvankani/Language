#include<stdio.h>
#include<conio.h>
int main()
{
	char a=60;
	int i;										// -127 +128   98-->b
	while(a<=100)
	{
		printf("%d is %c\n",a,a);
		a++;
	}
	getch();
}
