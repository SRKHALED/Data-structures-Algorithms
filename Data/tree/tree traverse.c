#include<stdio.h>
struct Tree
{
    int data;
    struct Tree *LTree;
    struct Tree *RTree;
};
struct Tree *mkt(int i)
{
    struct Tree *T=(struct Tree *)malloc(sizeof(struct Tree));
    T->data=i;
    T->LTree=NULL;
    T->RTree=NULL;
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
void InOrder(struct Tree *root)
{
    if(root==NULL)
    {
        return ;
    }
    InOrder(root->LTree);
    printf("%d ",root->data);
    InOrder(root->RTree);
}
void PostOrder(struct Tree *root)
{
    if(root==NULL)
    {
        return ;
    }
    PostOrder(root->LTree);
    PostOrder(root->RTree);
    printf("%d ",root->data);
}
int main()
{
    struct Tree *root=mkt(1);
    root->LTree=mkt(2);
    root->RTree=mkt(3);
    root->LTree->LTree=mkt(4);
    root->LTree->RTree=mkt(5);
    root->RTree->RTree=mkt(6);
    printf("Pr order traverse :");
    PreeOrder(root);
    printf("\nIn order traverse:");
    InOrder(root);
    printf("\nPost order traverse:");
    PostOrder(root);

}

