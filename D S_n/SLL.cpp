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
    {
     printf("\n (1) for Push");
    printf("\n (2) for Pop");
    printf("\n (3) for peek");
    printf("\n (4) for isempty");
    printf("\n (5) for Exit");
    printf("\n (6) for Display");
    printf("\n (7) for isfull"); 

        printf("\n Enter the number of your choice : ");
        scanf("%d", &ch);

        switch (ch)
        {

        case 1:
            printf("Enter the value of the element : ");
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
                printf("\n Top element : %d", e);
            }
            break;
        case 4:
            isempty();
            break;
        case 5:
            exit(0);
        case 6:
            display();
            break;
        case 7: 
             isfull();
             break;

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
        printf("%d ", top1->info);
        top1 = top1->ptr;
    }
 } 
void pop()
{
    top1 = top;
 
    if (top1 == NULL)
    {
        printf("\n Error : Trying to pop from empty stack");
        return;
    }
    else
        top1 = top1->ptr;
    printf("\n Popped value : %d", top->info);
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
        printf("\n Stack is not empty with %d elements", count);
}
void isfull()
{  
  
   if (size>count){
     printf("\n stack is not full",count);
   }else
   printf("\n stack is full");
}

