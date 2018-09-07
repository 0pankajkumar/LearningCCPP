#include<stdio.h>
#include<stdlib.h>

struct node{
int info;
struct node *left;
struct node *right;
};

struct node* createNode(int a)
{
	struct node* node = (struct node*)malloc(sizeof(struct node));
	node -> info = a;
}

void main()
{
struct node *root = createNode(1);

root -> left = createNode(2);
root -> right = createNode(3);

}