#include<conio.h>
#include<stdio.h>
# define capacity 10
int t=-1;
int s[capacity];

void push(int x)
{
 if(t==capacity-1)
   printf("## your stack is overflow\n");
 else
   {
    t=t+1;
    s[t]=x;
   }
}

void pop()
{
  if(t==-1)
    printf("## your stack is empty\n");
  else
    {
    printf("## deleted element is : %d\n",s[t]);
     t=t-1;
    }
}
void display()
{
 int i;
 if(t==-1)
   printf("## your stack is empty\n");
 else
 {
   printf("## stack element : ");
   for(i=t;i>=0;i--)
     printf("%d ",s[i]);
   printf("\n");
 }
}

void change(int y)
{
  if(t==-1)
    printf("## your stack is empty\n");
  else
    s[t]=y;
}

void peek()
{
 if(t==-1)
   printf("## your stack is empty\n");
 else
   printf("## peek element : %d\n",s[t]);
}

int main()
{
 int n,e,c;
 

 while(1)
 {
 printf("1) push\n2) pop\n3) display\n4) peek element\n5) change element\n6) exit\n");
 printf("enter your choice : ");
 scanf("%d",&n);
  switch(n)
  {
   case 1:
	 printf("enter an element : ");
	 scanf("%d",&e);
	 push(e);
	 break;
   case 2:
	 pop();
	 break;
   case 3:
	 display();
	 break;
   case 4:
	 peek();
	 break;
   case 5:
	 printf("enter new number : ");
	 scanf("%d",&c);
	 change(c);
	 break;
   case 6:
	 exit();
   default:
	 printf("*your choice is incorrect*\n");

   }
  }
getch();
}
