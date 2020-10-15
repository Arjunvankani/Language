//QUEUE_WITH_LINKLIST


#include<stdlib.h>
#include<stdio.h>

struct node 
{
    int d;
    struct node *n;
}*front = NULL, *rear = NULL;

struct node* create_node() {
    struct node *n1;
    n1 = (struct node *)malloc(sizeof(struct node));
    return n1;
}

void enqueue() {
    struct node *r;
    r = create_node();
    printf("enter the number : ");
    scanf("%d",&r->d);
    r->n = NULL;
    if(front == NULL) 
        front = r;
    else 
        rear->n = r;
    rear = r;
}

void dequeue() {
    struct node *t = front;
    if(front == NULL) {
        printf("\nyour queue is empty");
        return;
    }
    if(front->n == NULL) {
        printf("deleted element is : %d\n",t->d);
        free(t);
        front = NULL;
        rear = NULL;
    }
    else {
        front = front->n;
        printf("deleted element is : %d\n",t->d);
        free(t);
    }
}

void display() {
    struct node *t = front;
    if(front == NULL) {
        printf("your queue is empty\n");
        return;
    }
    else {
        printf("your elements : ");
        while(t != rear->n) {
            printf("%d ",t->d);
            t = t->n;
        }
        printf("\n");
    }
}

void peep() {
    if(front == NULL) {
        printf("\nqueue is empty\n");
        return;
    }
    else
        printf("front element is : %d\n",front->d);
}

int main()
{
    int n;
    while(1) 
    {
        printf("\n1.enqueue\n2.dequeue\n3.display\n4.front element\n5.exit\n");
        printf("\nenter your choice: ");
        scanf("%d",&n);
        switch(n)
        {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                peep();
                break;
            case 5:
                exit(0);
            default:
                printf("enter valid choice\n");
                break;
        }
    }
    return 0;
}
