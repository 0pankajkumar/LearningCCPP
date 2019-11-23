/*
Author - Pankaj Kumar
My first stack uisng Arrays in case
*/

#include<stdio.h>

int myStack[6];
int top_pointer = 0;

int push(int);
int pop();
void display_myStack(void);

int main()
{
  printf("Stack before pushing\n");
  display_myStack();
  printf("]\n\n\n");

  //Pushing data
  for(int i=0; i<6; i++)
  {
    push(i*22/7);
  }

  printf("Stack after pushing\n[");
  display_myStack();
  printf("]\n\n\n");

  printf("Now popping\n");
  while(top_pointer >= 0)
  {
    printf("Now popped : %d\n", pop());
    display_myStack();
  }

  printf("\n");

  return 0;
}

int push(int data)
{
  if(top_pointer == -1)
    return -1;
  if(top_pointer > 5)
    return -1;
  else
  {
    myStack[top_pointer] = data;
    top_pointer++;
  }
}

int pop()
{
  if(top_pointer == -1)
    return -1;
  if(top_pointer > 6)
    return -1;
  else
  {
    int popped_item = myStack[top_pointer];
    myStack[top_pointer] = 0;
    top_pointer -= 1;
    return popped_item;
  }
}

void display_myStack()
{
  printf("[");
  for(int i=0; i<6; i++)
  {
    printf("%d, ", myStack[i]);
  }
  printf("]");
}
