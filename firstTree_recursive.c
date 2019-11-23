/*
Author: Pankaj Kumar
C program for inorder, preorder & postorder traversal of a tree (recursive)
*/
#include<stdio.h>

struct myTree{
	int data;
	struct myTree *left;
	struct myTree *right;
};

void preorder(struct myTree *root)
{
	if(root)
	{
		printf("%d ", root->data);
		preorder(root->left);
		preorder(root->right);
	}
}

void inorder(struct myTree *root)
{
	if(root)
	{
		inorder(root->left);
		printf("%d ", root->data);
		inorder(root->right);
	}
}

void postorder(struct myTree *root)
{
	if(root)
	{
		postorder(root->left);
		postorder(root->right);
		printf("%d ", root->data);
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

	printf("\n\nPostorder:\n");
	postorder(&a);

	return 0;
}