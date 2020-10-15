#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
	struct node
	{
		int data;
		struct node *next;
	};
	
	void createlist(int n);
	void displaylist();
	void insert_at_beginning(int n);
	void insert_at_end(int n);
	void delete_from_beginning(int n);
	void delete_from_end(int n);
	
	int main()
	{
		int n,b,e,choice;
		printf("enter the number of node to be entered:");
		scanf("%d",&n);
		createlist(n);
		printf("entered data in the list is:\n");
		displaylist();
		
		printf("1.insert node at beginning\n2.insert node at end\n3.delete node from beginning\n4.delete node from end\n");
		printf("enter your choice:");
		scanf("%d",&n);
		
		switch(choice)
		{
			case 1:
				{
					if(choice==1)
					{
						printf("enter data to be entered at the beginning:");
						scanf("%d",&b);
						insert_at_beginning(n);
						break;
					}
				}
		}
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

void insert_at_beginning(int n)
{
    struct node *newnode;

    newnode = (struct node*)malloc(sizeof(struct node));

    if(newnode == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        newnode->data = n; // Link data part
        newnode->next = head; // Link address part

        head = newnode;          // Make newNode as first node

        printf("DATA INSERTED SUCCESSFULLY\n");
    }
}


