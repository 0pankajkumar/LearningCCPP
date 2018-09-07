#include<stdio.h>
#include<stdlib.h>

struct stud {
	int data;
	struct stud *next;
};

void main()
{
	//Declaring all nodes
	struct stud *first;
	struct stud *second;
	struct stud *third;
	struct stud *node;

	//Allocating memory in heap for all nodes
	first = (struct stud*)malloc(sizeof(struct stud));
	second = (struct stud*)malloc(sizeof(struct stud));
	third = (struct stud*)malloc(sizeof(struct stud));
	node = (struct stud*)malloc(sizeof(struct stud));

	//Initializing all data points of nodes
	first -> data = 5;
	second -> data = 94;
	third -> data = 889;

	//Printing to check
	printf("%i", first->data);
	printf("\n%i", second->data);
	printf("\n%i", third->data);
	printf("\n\n");

	//Joining all nodes to form a chain of linked lists
	first -> next = second;
	second -> next = third;
	third -> next = NULL;

	//Printing all nodes when they are linked is easier with loop now
	node->next = first;
	while(node != NULL)
	{
		printf("\n%d", node->data);
		node = node->next;
	}
}