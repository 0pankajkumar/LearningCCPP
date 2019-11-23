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

