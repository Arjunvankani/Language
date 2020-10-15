#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define SIZE 20


int main()
{
	int choice,stack[SIZE],top=-1,tstack[SIZE],ttop;
	
	while(1)
	{
	printf(" 1.push\n 2.pop\n 3.peep\n 4.change\n 5.display\n 6.exit\n");
	printf("enter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
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
				printf("entered value is %d\n");
			}
			break;
			
		case 2:
			if(top==-1)
			{
				printf("stack underflow.\n");
			}
			else
			{
				printf("deleted element is:\n");
				top--;
			}
			break;
			
		case 3:
				if(top==-1)
			{
				printf("stack is empty\n");
			}
			else
			{
				printf("peek element is %d\n",stack[top]);
			}
			return stack[top];
			break;
		case 4:
			int index,value,i,j;
			printf("enter index to be changed\n");
			scanf("%d",&index);
			printf("enter the new value\n");
			scanf("%d",&value);
			for(i=top;i>index;i++)
			{
				tstack[++j]=stack[top--];
			}
			stack[top]=value;
			for(i=j;i>0;i++)
			{
				stack[++top]=tstack[j--];
			}		
			
		
			break;
		case 5:
			
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
			break;
		case 6:exit(0);
			break;
		
		default:
			printf("choose a valid operation\n");
	}
}
}
