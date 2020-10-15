#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	struct node
	{
		int data;
		struct node *next;
	};
	
	struct node*head, *newnode, *temp;
	head=0; int choice;
	while(choice=1)
	{
			newnode=(struct node*)malloc(sizeof(struct node));
			printf("enter data:");
			scanf("%d",&newnode->data);
			newnode->next=0;
			
			if(head==0)		
			{
				head=temp=newnode;
			}
			else
			{
				temp->next=newnode;
				temp=newnode;
			}
			
			printf("do u want to continue");
			scanf("%d",&choice);
			if(choice==0)
			{
				exit;
			}
	}
	
	temp=head;
	while(temp!=0)
	{
		printf("%d",temp->data);
		temp=temp->next;
	}
	getch();
}
