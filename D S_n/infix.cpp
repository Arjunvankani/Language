#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#define size 100

char stack[size];
int top=-1;

void push(char x)
{
	if(top=size-1)
	{
		printf("stack overflow.");
	}
	else
	{
		stack[top]=x;
		top++;
	}
}

char pop()
{
	char x;
	if(top=-1)
	{
		printf("stack is empty.");
	}
	else
	{
		stack[top]=x;
		top--;
		return(x);
	}
	
}

int is_operator(char symbol)
{
	if(symbol=='^' || symbol=='*' || symbol=='/' || symbol=='+' ||symbol=='-')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int precedence(char symbol)
{
	if(symbol=='^')
	{
		return(3);
	}
	else if(symbol=='*' || symbol=='/')
	{
		return(2);
	}
	else if(symbol=='+' || symbol=='-')
	{
		return(1);
	}
	else
	{
		return(0);
	}
}

void infix_to_postfix(char infix[],char postfix[])
{
	
	int i,j;
	char temp,x;
	push('(');
	strcat(infix,")");
	
	i=0;
	j=0;
	
	x=infix[i];
	while(x!='\0')
	{
		if(x=='(')
		{
			push(x);
		}
		else if(isdigit(x) || isalpha(x))
		{
			postfix[j]=x;
			j++;
		}
		else if(is_operator(x)==1)
		{
			temp=pop();
			while(is_operator(temp)==1 && precedence(temp)>=precedence(x))
			{
				postfix[j]=temp;
				j++;
				temp=pop();
			}
			push(temp);
			push(x);
		}
		else if(x==')')
		{
			temp=pop();
			while(x!='(')
			{
				postfix[j]=temp;
				j++;
				temp=pop();
			}
		}
		else
		{
			printf("invalid expression.");
			getchar();
			exit(1);
		}
		i++;
		x=infix[i];
		
		if(top>0)
		{
			printf("invalid expression.");
			
			exit(1);
		}
		
		postfix[j]='\0';
	}
	
	
}

int main()
{
	char infix[size], postfix[size];
	
	printf("\nEnter Infix expression : ");
	gets(infix);

	infix_to_postfix(infix,postfix);                  
	printf("Postfix Expression: ");
	puts(postfix);                     

	return 0;
}
