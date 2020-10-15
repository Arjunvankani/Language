#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define N 10

 

int front=-1;
int rear=-1;
int queue[N];

 

void enqueue(int x)
{
        printf("\n Enter a value to be inserted:\n");
        scanf("%d",&x);
        if(rear==N-1)
        {
              printf("\n Queue is ful !\n");
        }
        else if(front==-1 && rear==-1)
        {
               front=rear=0;
               queue[rear]=x;
               printf("\n Inserted element is %d\n",queue[rear]);
        }
        else
        {
                rear++;
                queue[rear]=x;
                printf("\n Inserted element is %d\n",queue[rear]);
        }
}

 

void dequeue()
{
        if(rear==-1 && rear ==-1)
        {
                printf("\n Queue is empty.\n");
        }
        else if(front==rear)
        {
                front=rear=-1;
        }
        else
        {
                printf("\n Deleted element is %d\n",queue[front]);
                front++;
                
        }
}

 

void display()
{
    int i;
    printf("\nElements in the queue are:\t");
    if(rear==-1 && front ==-1)
    {
        printf("\nQueue is empty.\n");
    }
    else
    {
        for(i=front;i<=rear;i++)
        {
            printf("%d\t",queue[i]);
        }
    }
    printf("\n");
}

 

int main()
{
    int choice,x;
    while(choice)
    {
        printf("\n1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n4.EXIT\n");
        printf("\nEnter your choice.\t");
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
            exit(0);
        }
    }
    getch();

}
