#include <stdio.h>
#define N 5

int f =  - 1;
int r =  - 1;


void enque(int q[], int item)
{
    if ((f == 0 && r == N - 1) || (f == r + 1))
    {
        printf("q is full");
        return;
    }
    else if (r ==  - 1)
    {
        r++;
        f++;
    }
    else if (r == N - 1 && f > 0)
    {
        r = 0;
    }
    else
    {
        r++;
    }
    q[r] = item;
}

void display(int q[])
{
    int i;
    printf("\n");
    if (f > r)
    {
        for (i = f; i < N; i++)
        {
            printf("%d ", q[i]);
        }
        for (i = 0; i <= r; i++)
            printf("%d ", q[i]);
    }
    else
    {
        for (i = f; i <= r; i++)
            printf("%d ", q[i]);
    }
}

void deque(int q[])
{
    if (f ==  - 1)
    {
        printf("Queue is empty ");
    }
    else if (f == r)
    {
        printf("\n %d deleted", q[f]);
        f =  - 1;
        r =  - 1;
    }
    else
    {
        printf("\n %d deleted", q[f]);
        f++;
    }
}

int main()
{
    int n, ch;
    int q[N];
    do
    {
        printf("\n\n Circular Queue:\n1. Insert \n2. Delete\n3. Display\n0. Exit");
        printf("\nEnter Choice? : ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
                printf("\nEnter number: ");
                scanf("%d", &n);
                enque(q, n);
                break;
            case 2:
                deque(q);
                break;
            case 3:
                display(q);
                break;
        }
    }while (ch != 0);
}


