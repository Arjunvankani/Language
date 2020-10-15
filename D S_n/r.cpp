#include<stdio.h>
#define size 10
int stack[size],top=-1;
void peep()
{

		if(top==-1)
			{
				printf("stack is empty\n");
			}
			else
			{
				printf("peek element is %d\n",stack[top]);
			}
}
int main()
{
	peep();
}


