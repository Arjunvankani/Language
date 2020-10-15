#include<stdlib.h>
#include<stdio.h>

struct node 
{
    int d;
    struct node *n;
}*top = NULL;

struct node *head = NULL;

struct node* create_node() {
    struct node *n1;
    n1 = (struct node *)malloc(sizeof(struct node));
    return n1;
}

void push() {
    struct node *r;
    r = create_node();
    printf("\nenter the number : ");
    scanf("%d",&r->d);
    r->n = NULL;
    if(head == NULL)
        head = r;
    else {
        top->n = r;
    }
    top = r;
}

void pop()
{
    struct node *t;
    if(head == NULL) {
        printf("\nyour stack is empty\n");
        return;
    }
    t = head;
    if(head->n == NULL) {
        printf("\ndeleted element is : %d\n",t->d);
        free(t);
        head = NULL;
        top = NULL;
    }
    else {
        while(t->n->n != NULL)
            t = t->n;
        printf("\nyour deleted num is : %d\n",top->d);
        free(top);
        t->n = NULL; 
        top = t;
    } 
}

void display() {
    struct node *t;
    t = head;
    if(head == NULL) {
        printf("\nyour stack is empty\n");
        return;
    }
    else {
        printf("\nyour elements : ");
        while(t != NULL) {
            printf("%d ",t->d);
            t = t->n;
        }
        printf("\n");
    }
}

void peep() {
    struct node *t = head;
    if(head == NULL) {
        printf("\nyour stack is empty\n");
        return;
    }
    else 
        printf("\ntop element of the stack : %d\n",top->d); 
}

int main() {
    int x, i = 1;
    while(1) {
        printf("\n1. push\n2. pop\n3. display\n4. peep\n5. exit\n");
        printf("\nenter your choise between 1-5 : ");
        scanf("%d",&x);
        system("cls");
        switch(x) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                peep();
                break; 
            case 5:
                exit (0);
            default:
                printf("enter correct choise\n");
        }
    }
    return 0;
}
