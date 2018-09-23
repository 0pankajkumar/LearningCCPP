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

//InOrder traversal
void LNR(struct node* root)
{//printf("T");
	if(root)
	{
		LNR(root -> left);
		printf("%d ", root -> info);
		LNR(root -> right);
	}
}

//Preorder traversal
void NLR(struct node* root)
{
    if(root)
    {
        printf("%d ", root -> info);
        NLR(root -> left);
        NLR(root -> right);
    }
}

//Postorder traversal
void LRN(struct node* root)
{
    if(root)
    {
        NLR(root -> left);
        NLR(root -> right);
        printf("%d ", root -> info);
    }
}


void main()
{
struct node* root = createNode(1);
//insert(root, 1);
insert(root, 2);
insert(root, 3);
insert(root, 4);
insert(root, 7);
insert(root, 5);
insert(root, 6);

printf("\nInOrder traversal\n");
LNR(root);
printf("\n\nPreOrder traversal\n");
NLR(root);
printf("\n\nPostOrder traversal\n");
LRN(root);
}