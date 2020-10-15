#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define CAPACITY 40 

typedef struct node 
{
    int data;
    struct node * next;
} Queue;  
 int size = 0;


int enqueue(Queue ** rear, Queue ** front, int data);
int dequeue(Queue ** front);
int getFront(Queue * front);
int isEmpty();
int isFull();


int main()
{
    int ch, data;
    Queue *rear, *front;

    rear  = NULL;
    front = NULL;
       
       while(1)
      {
        printf("\n 1.ENQUEUE\n 2.DEQUEUE\n 3.IS_EMPTY\n 4.FRONT\n 5.EXIT\n");
        printf("enter your choice: ");
        scanf("%d", &ch);
        
        switch (ch)
        {
            case 1:
                printf("Enter the element : ");
                scanf("%d", &data);
              
                if (enqueue(&rear, &front, data))
                printf("your Element added to queue.");
                else
                    printf("your Queue is full.");
                break;

            case 2:
                data = dequeue(&front);
                if (data == INT_MIN)
                    printf("your Queue is empty.");
                else
                    printf("deleted element is %d", data);
                break;

            case 3: 
                if (isEmpty())
                    printf("Queue is empty.");
                else 
                    printf("Queue is not empy\n size of queue is %d", size);
                break;
                
            case 4: 
                data = getFront(front);
                if (data == INT_MIN)
                    printf("Queue is empty.");
                else 
                    printf("Front element is %d", data);
                break;

            case 5:
                printf("Exit\n");
                exit(0);             
            default:
                printf("Invalid choice, please give the element  between (0-5).");
                break;
        }
        printf("\n\n");
      }
}
int enqueue(Queue ** rear, Queue ** front, int data)
{
    Queue * newNode = NULL;

    if (isFull())
    {
        return 0;
    }
    newNode = (Queue *) malloc (sizeof(Queue));
    newNode->data = data;
    newNode->next = NULL;
 
    if ( (*rear) )
    {
        (*rear)->next = newNode;
    }    
    *rear = newNode;

    if ( !( *front) )
    {
        *front = *rear;
    }
    size++;
    return 1;
}

int dequeue(Queue ** front)
{
    Queue *toDequque = NULL;
    int data = INT_MIN;
    
    if (isEmpty())
    {
        return INT_MIN;
    }
    toDequque = *front;
    data = toDequque->data;

    *front = (*front)->next;
    size--;
    free(toDequque);
    return data;
}

int getFront(Queue * front)
{
    return (isEmpty())
            ? INT_MIN
            : front->data;
}
int isEmpty()
{
    return (size <= 0);
}
int isFull()
{
    return (size > CAPACITY);
}
//output

