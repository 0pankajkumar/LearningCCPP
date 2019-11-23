/*
Author: Pankaj Kumar
C program for inorder, preorder & postorder traversal of a tree (NON recursive)
*/
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#define MAXSIZE 10

struct myTree{
	int data;
	struct myTree *left;
	struct myTree *right;
};

//////////////////////////////////////////
////Stack code below/////////////////////
////////////////////////////////////////

struct stack{
	int top;
	int capacity;
	struct myTree *array;
};

struct stack *createStack(){
	struct stack *s = malloc(sizeof(struct stack));
	if(!s)
		return NULL;
	s->top = -1;
	s->capacity = MAXSIZE;
	s->array = malloc(s->capacity * sizeof(struct myTree));
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

void push(struct stack *s,struct myTree *data){
	printf("Pushing now\n");
	if(s->top == s->capacity)
		printf("Stack Overflow\n");
	else{
		s->array[++s->top] = *data;
		printf("Pushed...%d\n",s->top);
	}
}

struct myTree pop(struct stack *s){
	printf("popping now\n");
	if(s->top == -1){
		printf("Stack underflow\n");
		
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


/////////////////////////////////////////////
///Code for Tree Begins/////////////////////
///////////////////////////////////////////

void preorder(struct myTree *root)
{
	struct stack *myStack = createStack();
	while(1)
	{
		while(root)
		{
			printf("%d ", root->data);
			push(myStack, root);
			root = root->left;
		}
		if(!isStackEmpty(myStack))
			break;
		*root = pop(myStack);

		root = root->right;
	}
	deleteStack(myStack);
}

void inorder(struct myTree *root)
{
	struct stack *myStack = createStack();
	while(1)
	{
		while(root)
		{
			push(myStack, root);
			root = root->left;
			
		}
		if(!isStackEmpty(myStack))
			break;
		*root = pop(myStack);

		printf("%d ", root->data);

		root = root->right;
	}
	deleteStack(myStack);
}

void postorder(struct myTree *root)
{
	if(root)
	{
		
	}
}

int main()
{
	struct myTree a,b,c,d,e,f,g;
	a.data = 1;
	a.left = &b;
	a.right = &c;

	b.data = 2;
	b.left = &d;
	b.right = &e;

	c.data = 3;
	c.left = &f;
	c.right = &g;

	d.data = 4;
	d.left = NULL;
	d.right = NULL;

	e.data = 5;
	e.left = NULL;
	e.right = NULL;

	f.data = 6;
	f.left = NULL;
	f.right = NULL;

	g.data = 7;
	g.left = NULL;
	g.right = NULL;

	printf("Preorder:\n");
	preorder(&a);

	printf("\n\nInorder:\n");
	inorder(&a);

	// printf("\n\nPostorder:\n");
	// postorder(&a);

	return 0;
}