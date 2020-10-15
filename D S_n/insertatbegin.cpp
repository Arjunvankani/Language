#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

	struct node
	{
		int data;
		struct node *next;
	};
	
	void createlist(int n);
	void insertatbegining(int data);
	void displaylist();
	
	int main()
	{
		int n,data;
		printf("enter the number of node to be entered:");
		scanf("%d",&n);
		createlist(n);
		printf("entered data in the list is:\n");
		displaylist();
		printf("enter the data to be entered at the begining:\t");
		scanf("%d",&data);
		insertatbegining(data);
		printf("entered data in the list is:\n");
		displaylist();
		return 0;
	}
	
	void createlist(int n)
	{
		struct node*head,*newnode,*temp;
		 int i;
		 
		
	for(i=1;i<=n;i++)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("enter data %d\t",i);
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
		}	
	
	}
	
	void displaylist(int data)
	{
	struct node*temp;
	
	while(temp!=0)
	{
		printf("data = %d\n",temp->data);
		temp=temp->next;
	}
	}
	
	void insertatbegining()
	{
		struct node*head,*newnode; int i;
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("enter data %d\t",i);
		scanf("%d",&newnode->data);
		newnode->next=head;
		head=newnode;
	}