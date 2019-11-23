#include <limits.h>
#include<stdio.h>
#include<stdlib.h>

#define MAXSIZE 10

struct stack{
	int top;
	int capacity;
	int *array;
};

struct stack *createStack(){
	struct stack *s = malloc(sizeof(struct stack));
	if(!s)
		return NULL;
	s->top = -1;
	s->capacity = MAXSIZE;
	s->array = malloc(s->capacity * sizeof(int));
	if(!s->array)
		return NULL;
	return s;
}

int isStackEmpty(struct stack *s){
	return (s->top == -1);
}

int isStackFull(struct stack *s){
	return (s->top == s->capacity - 1);
}

void push(struct stack *s,int data){
	if(s->top == s->capacity)
		printf("Stack Overflow\n");
	else{
		s->array[++s->top] = data;
	}
}

int pop(struct stack *s){
	if(s->top == -1){
		printf("Stack underflow\n");
		return INT_MIN;
	}
	else{
		return s->array[s->top--];
	}
}

void deleteStack(struct stack *s){
	printf("Deleteing Stack\n");
	if(s)
	{
		if(s->array)
			free(s->array);
		free(s);
	}
	printf("Deleted stack, Bye\n");
}

void viewStack(struct stack *s){
	if(!s)
		printf("No stack exists\n");
	else{
		int cursor = s->top;
		while(cursor >= 0){
			printf("%d ", s->array[cursor--]);
		}
	}
}

void main()
{
	struct stack *s = createStack();
	push(s, 10);
	push(s, 20);
	push(s, 40);
	push(s, 60);
	viewStack(s);
	//deleteStack(*s);
}
