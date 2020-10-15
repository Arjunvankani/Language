#include<stdio.h>
#include<stdlib.h>     
#include<ctype.h>     
#include<string.h>

 

#define SIZE 100

 


char stack[SIZE];
int top = -1;

 


void push(char X)
{
    if(top >= SIZE-1)
    {
        printf("\nStack Overflow.");
    }
    else
    {
        top = top+1;
        stack[top] = X;
    }
}

 


char pop()
{
    char X ;

 

    if(top <0)
    {
        printf("stack under flow: invalid infix expression");
        getchar();
        exit(1);
    }
    else
    {
        X = stack[top];
        top = top-1;
        return(X);
    }
}

 


int is_operator(char symbol)
{
    if(symbol == '^' || symbol == '*' || symbol == '/' || symbol == '+' || symbol =='-')
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
    if(symbol == '^')
    {
        return(3);
    }
    else if(symbol == '*' || symbol == '/')
    {
        return(2);
    }
    else if(symbol == '+' || symbol == '-')        
    {
        return(1);
    }
    else
    {
        return(0);
    }
}

 

void InfixToPostfix(char infix_exp[], char postfix_exp[])
{ 
    int i, j;
    char X;
    char temp;

 

    push('(');                              
    strcat(infix_exp,")");                  

 

    i=0;
    j=0;
    X=infix_exp[i];       

 

    while(X != '\0')       
    {
        if(X == '(')
        {
            push(X);
        }
        else if( isdigit(X) || isalpha(X))
        {
            postfix_exp[j] = X;         
            j++;
        }
        else if(is_operator(X) == 1)        
        {
            temp=pop();
            while(is_operator(temp) == 1 && precedence(temp)>= precedence(X))
            {
                postfix_exp[j] = temp;               
                j++;
                temp = pop();                    
            }
            push(temp);
            push(X);                
        }
        else if(X == ')')        
        {
            temp = pop();                  
            while(temp != '(')                
            {
                postfix_exp[j] = temp;
                j++;
                temp = pop();
            }
        }
        else
        { 
            printf("\nInvalid infix Expression.\n");     
            getchar();
            exit(1);
        }
        i++;

 


        X = infix_exp[i];
    } 
    if(top>0)
    {
        printf("\nInvalid infix Expression.\n");       
        getchar();
        exit(1);
    }
    if(top>0)
    {
        printf("\nInvalid infix Expression.\n");      
        getchar();
        exit(1);
    }

 


    postfix_exp[j] = '\0';

 

}

 


int main()
{
    char infix[SIZE], postfix[SIZE];        

    printf("\nEnter Infix expression : ");
    gets(infix);

 

    InfixToPostfix(infix,postfix);                 
    printf("Postfix Expression: ");
    puts(postfix);                   

 

    return 0;
}
