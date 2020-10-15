#include<stdio.h>
#include<process.h>
#include<stdlib.h>
 
#define MAX 5	//Maximum number of elements that can be stored
 

 
int main()
{
	int choice, top=-1,stack[MAX];

	
	while(1)	//infinite loop, will end when choice will be 4
	{
		printf("\n\n1.Push\n2.Pop\n3.Display\n4.Exit");
		printf("\n\nEnter your choice:");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1: 
					
	int a;
	
	if(top==MAX-1)
	{
		printf("\nStack is full!!");
	}
	else
	{
		printf("\nEnter element to push:");
		scanf("%d",&a);
		top=top+1;
		stack[top]=a;
	}
					break;
			case 2: 
	if(top==-1)
	{
		printf("\nStack is empty!!");
	}
	else
	{
		printf("\nDeleted element is %d",stack[top]);
		top=top-1;
	}
					break;
			case 3: 
				int i;
	
	if(top==-1)
	{
		printf("\nStack is empty!!");
	}
	else
	{
		printf("\nStack is...\n");
		for(i=top;i>=0;--i)
			printf("%d\n",stack[i]);
	}
					break;
			case 4: exit(0);
			
			default: printf("\nWrong Choice!!");
		}
	}
}
 



