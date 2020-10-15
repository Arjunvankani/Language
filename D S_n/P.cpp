#include<stdlib.h>
#include <stdio.h>

int create();
int display();
int insert_at_beginning();
int insert_at_end();
int ldelete_from_beginning();
int delete_from_end();

struct node
{
    int data;
    struct node *next;
};
struct node *start=NULL;
int main()
{
	int choice;
	printf("\n 1.Insert at the beginning");
    printf("\n 2.Insert at the end  ");
	printf("\n 3.Delete from beginning");
    printf("\n 4.Delete from the end");
    printf("\n 5.Exit");
    while(1)
	{
    	printf("\nEnter your choice:");
        scanf("%d",&choice);
		switch(choice)
        {
			case 1: insert_at_beginning();
                    display();
                    printf("\n");
                    break;
            case 2: insert_at_end();
                    display();
                    printf("\n");
                	break;
            case 3: ldelete_from_beginning();
                    display();
                    printf("\n");
                    break;
            case 4: delete_from_end();
                    display();
                    printf("\n");
                    break;
            case 5: exit(0);
                    break;
            default: printf("n Wrong Choice:n");
                     break;
        }
    }
    return 0;
}
int create()
{
	struct node *temp,*head;
    temp=(struct node *)malloc(sizeof(struct node));
    if(temp==NULL)
    {
    	printf("Out of Memory Space:n");
        exit(0);
    }
    printf("Enter the data value for the node:");
    scanf("%d",&temp->data);
    temp->next=NULL;
    if(start==NULL)
    	start=temp;
    else
    {
        head=start;
        while(head->next!=NULL)
        {
            head=head->next;
		}
    	head->next=temp;
    }
}
int display()
{
    struct node *head;
    if(start==NULL)
    {
        printf("List is empty:n");
        return 0;
    }
    else
    {
    	head=start;
        printf("The elements in the list are:");
        while(head!=NULL)
        {
            printf("%d\t",head->data );
            head=head->next ;
        }
    }
}
int insert_at_beginning()
{
    struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
    if(temp==NULL)
    {
    	printf("Out of Memory Space:n");
        return 0;
    }
    printf("Enter the data value for the node:" );
    scanf("%d",&temp->data);
    temp->next =NULL;
    if(start==NULL)
    	start=temp;
    else
    {
        temp->next=start;
        start=temp;
    }
}
int insert_at_end()
{
    struct node *temp,*head;
    temp=(struct node *)malloc(sizeof(struct node));
    if(temp==NULL)
    {
    	printf("Out of Memory Space:n");
        return 0;
    }
    printf("Enter the data value for the node:" );
    scanf("%d",&temp->data );
    temp->next =NULL;
    if(start==NULL)
        start=temp;
    else
    {
        head=start;
        while(head->next !=NULL)
        {
            head=head->next ;
        }
        head->next =temp;
    }
}
int ldelete_from_beginning()
{
    struct node *head;
    if(head==NULL)
    {
        printf("List is Empty:n");
        return 0;
    }
    else
    {
        head=start;
        start=start->next ;
        printf("The deleted element is :%d\n",head->data);
        free(head);
    }
}
int delete_from_end()
{
    struct node *temp,*head;
    if(start==NULL)
    {
        printf("List is Empty:");
        exit(0);
    }
    else if(start->next ==NULL)
    {
        head=start;
        start=NULL;
        printf("The deleted element is:%d\n",head->data);
        free(head);
    }
    else
    {
        head=start;
        while(head->next!=NULL)
        {
            temp=head;
            head=head->next;
        }
        temp->next=NULL;
        printf("The deleted element is:%d\n",head->data);
        free(head);
    }
}
