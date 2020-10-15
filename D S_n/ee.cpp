#include<stdio.h>
#include<conio.h>
int main()
{
	char a=60;
	int i;
	while(a<=127)
	{
		printf("%d is %c\n",a,a);
		a++;
	}
	getch();
}
