//Buggy code
#include<stdio.h>
#include<stdlib.h>

struct TreeNode
{
    char data;
    struct TreeNode *firstChild;
    struct Treenode *nextSibling;
}root;

struct TreeNode *store(struct Treenode *root)
{
    
}

struct TreeNode *createNode(char element)
{
    struct TreeNode *root = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    
    if (element)
    {
        root -> data = element;
    }
    else
    {
        root -> data = '\0';
    }
    
    root -> firstChild = NULL;
    root -> nextSibling = NULL;
    return root;
}

void main()
{
    struct TreeNode *root = createNode('a');
    
    root -> firstChild = createNode('b');
    root -> firstChild -> nextSibling = createNode('c');
    root -> firstChild -> nextSibling -> nextSibling = createNode('s');
    root -> firstChild -> nextSibling -> nextSibling -> nextSibling = createNode('e');
    root -> firstChild -> nextSibling -> nextSibling -> nextSibling -> nextSibling = createNode('f');
    
    root -> nextSibling -> firstChild = createNode('A');
    root -> nextSibling -> firstChild -> firstChild = createNode('B');
    root -> nextSibling -> nextSibling = createNode('C');
}