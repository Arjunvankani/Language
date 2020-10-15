#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 5

int queue[max];
int front=-1,rear=-1;

void enqueue(int x)
{   
	if(front==-1 && rear==-1)
	{
		printf("enter the element to be inserted:");
		scanf("%d",&x);
		front=rear=0;
		queue[rear]=x;
	}
	else if((rear+1)%max==front)
	{
		printf("queue is full.\n");
	}
	else
	{
		printf("enter the element to be inserted:");
		scanf("%d",&x);
		rear=(rear+1)%max;
		queue[rear]=x;
	}
}

void dequeue()
{
	if(front==-1 && rear==-1)
	{
		printf("queue is empty.\n");
	}
	else if(front==rear)
	{
		printf("deleted element is %d\n",queue[front]);
		front=rear=-1;
	}
	else
	{
		printf("deleted element is %d\n",queue[front]);
		front=(front+1)%max;	
	}
}

void display()
{    
	int i=front;
	if(front==-1 && rear==-1)
	{
		printf("queue is empty.\n");
	}
	else
	{
		printf("elements in the queue are: ");
		while(i!=rear)
		{
			printf("%d\t",queue[i]);
			i=(i+1)%max;
		}
		printf("%d\n",queue[rear]);
	}
}

void is_full()
{
	if((rear+1)%max==front)
	{
		printf("queue is full\n");
	}
	else
	{
		printf("queue if not full\n");
	}
}

void is_empty()
{
	if(rear==front)
	{
		printf("queue is empty.\n");
	}
	else
	{
		printf("queue is not empty.\n");
	}
	
}

void peek()
{
	printf("front element is %d\n",queue[front]);
}

int main()
{
	int choice,x;
	while(choice)
	{
		printf("\n 1.ENQUEUE\n 2.DEQUEUE\n 3.DISPLAY\n 4.IS_FULL\n 5.IS_EMPTY\n 6.PEEK\n 7.EXIT\n");
		printf("enter your choice:");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				enqueue(x);
				break;
			
			case 2:
				dequeue();
				break;
				
			case 3:
				display();
				break;
				
			case 4:
				is_full();
				break;
				
			case 5:
				is_empty();
				break;
				
			case 6:
				peek();
				break;
				
			case 7:
				exit(0);
				break;
					
			default:
				printf("enter valid choice");
		}
	}
	getch();
}
