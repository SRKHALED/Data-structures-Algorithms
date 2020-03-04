#include<stdio.h> 
struct tree
{
	int data;
	struct tree *left;
	struct tree *right;
};
struct tree *mt()
{
	struct tree *p = (struct tree *)malloc(sizeof(struct tree));
	int x;
	printf(" Enter data(-1 for no child)\n");
	scanf("%d", &x);
	if (x == -1)
		return NULL;
	p->data = x;
	printf(" Enter Left child of %d", x);
	p->left = mt();
	printf(" Enter Right child of %d", x);
	p->right = mt();
	return p;
}

void preorder(struct tree * t)
{
	if (t != NULL)
	{
		printf(" %d",t->data);
		preorder(t->left);
		preorder(t->right);
	}
}
int main()
{
	struct tree *root;
	root= mt();
	printf("The preorder traversal of tree is \n");
	preorder(root);
}