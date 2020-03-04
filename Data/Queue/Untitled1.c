#include<stdio.h>
struct tree
{
    int data;
    struct tree *left;
    struct tree *right;
};
struct tree *makeTree(char item)
{
    struct tree *nt=(struct tree *)malloc(sizeof(struct tree));
    nt->data=item;
    nt->left=NULL;
    nt->right=NULL;
    return nt;
}
void POT(struct tree *root)
{
    if(root==NULL)
        return;
    printf("%c ",root->data);
    POT(root->left);
    POT(root->right);
}
void POSTOT(struct tree *root)
{
    if(root==NULL)
        return ;
    POSTOT(root->left);
    POSTOT(root->right);
    printf("%c ",root->data);
}
void INOT(struct tree *root)
{
    if(root==NULL)
        return ;
    INOT(root->left);
    printf("%c ",root->data);
    INOT(root->right);
}
int less(struct tree *t,int item)
{
    return(item<=t->data);
}
int getrer(struct tree *t,int item)
{
    return (item>t->data);
}
void bst(struct tree **root, int data)
{
    struct tree *nt=makeTree(data);
    if(*root==NULL)
    {
        *root=nt;
        return ;
    }
    struct tree *ptr=*root,*temp;
    if(less(ptr,data))
    {
        while(ptr!=NULL)
        {
            ptr
        }
    }
}
int main()
{
    struct tree *root=makeTree('A');
    root->left=makeTree('B');
    root->right=makeTree('C');
    root->left->left=makeTree('D');
    root->left->right=makeTree('E');
    root->right->left=makeTree('F');
    root->right->right=makeTree('G');
    root->left->left->left=makeTree('H');
    printf("Pr order ");
    POT(root);
    printf("\nIn order");
    INOT(root);
    printf("\nPost order");
    POSTOT(root);
}
