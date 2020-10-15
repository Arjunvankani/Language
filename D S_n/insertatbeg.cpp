#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

	struct node
	{
		int data;
		struct node *next;
	};
	
	void createlist(int n);
	void displaylist();
	void insertNodeAtBeginning(int data);
	
	int main()
	{
		int n,data;
		printf("enter the number of node to be entered:");
		scanf("%d",&n);
		createlist(n);
		printf("entered data in the list is:\n");
		displaylist();
		
		 printf("\nEnter data to insert at beginning of the list: ");
    scanf("%d", &data);
    insertNodeAtBeginning(data);

    printf("\nData in the list \n");
    displaylist();

		return 0;
	}
	
	void createlist(int n)
	{
		struct node*head,*newnode,*temp;
		head=0 ;  int i;
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
	
	void displaylist()
	{
	struct node*temp;
	
	while(temp!=0)
	{
		printf("data is %d\n",temp->data);
		temp=temp->next;
	}
	}
	void insertNodeAtBeginning(int data)
{
    struct node *newNode,*head;

    newNode = (struct node*)malloc(sizeof(struct node));

    if(newNode == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        newNode->data = data; // Link data part
        newNode->next = head; // Link address part

        head = newNode;          // Make newNode as first node

        printf("DATA INSERTED SUCCESSFULLY\n");
    }
}

