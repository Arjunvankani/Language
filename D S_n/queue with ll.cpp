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

void qinsert() {
    struct node *r;
    r = create_node();
    printf("\nenter the number : ");
    scanf("%d",&r->d);
    r->n = NULL;
    if(front == NULL) 
        front = r;
    else 
        rear->n = r;
    rear = r;
}

void qdelete() {
    struct node *t = front;
    if(front == NULL) {
        printf("\nyour queue is empty\n");
        return;
    }
    if(front->n == NULL) {
        printf("\ndeleted element is : %d\n",t->d);
        free(t);
        front = NULL;
        rear = NULL;
    }
    else {
        front = front->n;
        printf("\nyour deleted num is : %d\n",t->d);
        free(t);
    }
}

void display() {
    struct node *t = front;
    if(front == NULL) {
        printf("\nyour queue is empty\n");
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
        printf("\nyour queue is empty\n");
        return;
    }
    else
        printf("\nyour top element is : %d\n",front->d);
}

int main()
{
    int n;
    while(1) 
    {
        printf("\n1. insert\n2. delete\n3. display\n4. peep\n5. exit\n");
        printf("\nenter your choise between 1-4 : ");
        scanf("%d",&n);
        system("cls");
        switch(n)
        {
            case 1:
                qinsert();
                break;
            case 2:
                qdelete();
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
                printf("enter correct choise\n");
                break;
        }
    }
    return 0;
}
