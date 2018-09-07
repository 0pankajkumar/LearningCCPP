#include<stdio.h>
#include<stdlib.h>

struct stud {
	int data;
	struct stud *next;
};

void print(stud *s)
{
	while(s != NULL)
	{
		printf();
	}
}

void addFront(int n)
{
	struct stud *another;
	another = (struct stud*)malloc(sizeof(struct stud));
	start -> next = another;
	another -> data = n;
	another -> next = first;
}

void main()
{
	//Declaring all nodes
	struct stud *first;
	struct stud *second;
	struct stud *third;
	struct stud *start;

	//Allocating memory in heap for all nodes
	first = (struct stud*)malloc(sizeof(struct stud));
	second = (struct stud*)malloc(sizeof(struct stud));
	third = (struct stud*)malloc(sizeof(struct stud));
	
	//Initializing all data points of nodes
	first -> data = 5;
	second -> data = 94;
	third -> data = 889;

	//Joining all nodes to form a chain of linked lists
	start -> next = first;
	first -> next = second;
	second -> next = third;
	third -> next = NULL;


	addFront(5);
}