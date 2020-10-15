#include <stdio.h>
#include <string.h>

#define max 100
int top,stack[max];

void push(char x){

      // Push(Inserting Element in stack) operation
      if(top == max-1){
          printf("stack overflow");
      }  else {
          stack[++top]=x;
      }

}

void pop(){
    // Pop (Removing element from stack)
      printf("%c",stack[top--]);
}


main()
{
   char str[max];
   printf("input string:");
   gets(str);
   
  
   int len = strlen(str);
   int i;

   for(i=0;i<len;i++)
        push(str[i]);
        
    printf("reversed string:");

   for(i=0;i<len;i++)
      pop();
}
