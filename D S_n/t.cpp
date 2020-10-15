#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define SIZE 10

int stack[SIZE],top=-1,tstack[SIZE],ttop,j=-1;

void push()
{
	int val;
		
			if(top==SIZE-1)
			{
				printf("STACK IS FULL.\n");
			}
			else
			{
				printf("enter the element to be pushed:");
				scanf("%d",&val);
				top++;
				stack[top]=val;
				printf("entered value is %d\n",val);
			}
	}
void pop()

{
				if(top==-1)
			{
				printf("stack underflow.\n");
			}
			
			else
			{
				printf("deleted element is %d\n",stack[top]);
				top--;
			}
}
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
void change()
{

		int index,value,i=0,j=0;
			printf("enter index to be changed\n");
			scanf("%d",&index);
			printf("enter the new value\n");
			scanf("%d",&value);
			for(i=top;i>index;i++)
			{
				tstack[++j]=stack[top--];
			}
			stack[top]=value;
			for(i=j;i>0;i--)
			{
				stack[++top]=tstack[j--];
			}	
}
void display()
{
		int i;
		if(top==-1)
			{
				printf("stack is empty\n");
			}
			else
			{
			printf("stack is:\n");
			for(i=top;i>=0;i--)
			{
				printf("%d\n",stack[i]);
			}
		}
}
int main()
{
	int choice;
	
	while(1)
	{
	printf(" 1.push\n 2.pop\n 3.peep\n 4.change\n 5.display\n 6.exit\n");
	printf("enter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: push();
		break;
		case 2: pop();
		break;
		case 3: peep();
		break;
		case 4:change();
		break;
		case 5: display();
		break;
		case 6:exit(0);
		break;
		
		default: printf("choose valid operation\n");
}
}
return 0;
}
