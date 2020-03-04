#include<stdio.h>
struct Tree
{
    int data;
    struct Tree *LTree;
    struct Tree *RTree;
};
struct Tree *mkt()
{
    struct Tree *T=(struct Tree *)malloc(sizeof(struct Tree));
    int x;
    scanf("%d",&x);
    if(x<0)
        return NULL;
    T->data=x;
     printf("Enter left child of %d (if no child enter -1)\n",x);
    T->LTree=mkt();
     printf("Enter right child of %d (if no child enter -1)\n",x);
    T->RTree=mkt();
    return T;
}
void PreeOrder(struct Tree *root)
{
    if(root==NULL)
    {
        return ;
    }
    printf("%d ",root->data);
    PreeOrder(root->LTree);
    PreeOrder(root->RTree);
}
struct Tree *delete ( int item)
{

}
int main()
{
    printf("Enter root\n");
    struct Tree *root=mkt();
    PreeOrder(root);
}

