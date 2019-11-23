#include<stdio.h>
#include<stdlib.h>


struct linkedListPrototype
{
	int data;
	struct linkedListPrototype *next;
};

int main()
{

	struct linkedListPrototype *first = (struct linkedListPrototype*)malloc(sizeof(struct linkedListPrototype));
	
	first->data = 8097;
	printf("%d",first->data);





return 0;
}


