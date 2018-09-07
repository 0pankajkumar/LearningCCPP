#include<stdio.h>
#include<stdlib.h>

struct node{
int info;
struct node *left;
struct node *right;
};

struct node* createNode(int a)
{//printf("@");
	struct node* BST = (struct node*)malloc(sizeof(struct node*));
	BST -> info = a;
	BST -> right = NULL;
	BST -> left = NULL;
	return BST;
}

struct node* insert(struct node* root, int a)
{//A recursive function to go to the appropiate leaf & insert
	if (root == NULL)
		return createNode(a);
	if(root->info < a)
		root -> right = insert(root -> right , a);
	if(root->info > a)
		root -> left = insert(root -> left , a);
	return root;
}

void LNR(struct node* root)
{//printf("$");
	if(root != NULL)
	{
		LNR(root -> left);
		printf("%d ", root -> info);
		LNR(root -> right);
	}
}

;	//Root declared as Global

void main()
{
struct node* root = createNode(20);
insert(root, 19);
insert(root, 150);
insert(root, 13);
insert(root, 1);
insert(root, 1451);
insert(root, 10);
insert(root, 8);

LNR(root);
}