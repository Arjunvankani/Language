#include <stdio.h>
#include <stdlib.h>
#define size 5

struct node
{
    int info;
    struct node *ptr;
}*top,*top1,*temp;

void push(int data);
void pop();
int peek();
void isempty();
void display();
void isfull();
int count = 0;

int main()
{
    int no, ch, e;
    
    
    while (1)
    {   printf("\n 1.Push\n 2.pop\n 3.peek\n 4.is_empty\n 5.display\n 6.is_full\n 7.exit");
        printf("\n Enter your choice : ");
        scanf("%d", &ch);

        switch (ch)
        {

        case 1:
            printf("Enter the element : ");
            scanf("%d", &no);
            push(no);
            break;
        case 2:
            pop();
            break;
        case 3:
            if (top == NULL)
                printf("No elements in stack");
            else
            {
                e = peek();
                printf("Top element is : %d\n", e);
            }
            break;
        case 4:
            isempty();
            break;
        case 5:
            display();
            break;
        case 6:
 				isfull();
				            
        case 7: 
             exit(0);

        default :
            printf(" Wrong choice, Please enter correct choice  ");
            break;
        }
    }
} 
void push(int data)
{
    if (top == NULL)
    {
        top =(struct node *)malloc(1*sizeof(struct node));
        top->ptr = NULL;
        top->info = data;
    }
    else
    {
        temp =(struct node *)malloc(1*sizeof(struct node));
        temp->ptr = top;
        temp->info = data;
        top = temp;
    }
    count++;
} 
void display()
{
    top1 = top;
 
    if (top1 == NULL)
    {
        printf("Stack is empty");
        return;
    }
    while (top1 != NULL)
    {
        printf("elements in the stack are: %d\n ", top1->info);
        top1 = top1->ptr;
    }
 } 
void pop()
{
    top1 = top;
 
    if (top1 == NULL)
    {
        printf("\n stack is empty..");
        return;
    }
    else
        top1 = top1->ptr;
    printf("deleted element is : %d\n", top->info);
    free(top);
    top = top1;
    count--;
}
int peek()
{
    return(top->info);
}
void isempty()
{
    if (top == NULL)
        printf("\n Stack is empty");
    else
        printf("Stack is not empty.it has %d elements\n", count);
}
void isfull()
{  
  
   if (size>count){
     printf("\n stack is not full\n",count);
   }else
   printf("stack is full\n");
}


