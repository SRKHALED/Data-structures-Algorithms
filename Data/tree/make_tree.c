#include<stdio.h>
struct binaryTree
{
    int data;
    struct binaryTree *left;
    struct binaryTree *right;
};
struct binaryTree *makeBT(int item)
{
    struct binaryTree *t=(struct binaryTree*)malloc(sizeof(struct binaryTree));
    t->data=item;
    t->left=NULL;
    t->right=NULL;
    return t;
}
int main()
{
    struct binaryTree *t1=makeBT(10);
    struct binaryTree *t2=makeBT(20);
    struct binaryTree *t3=makeBT(30);
    struct binaryTree *t4=makeBT(40);
    struct binaryTree *t5=makeBT(50);
    struct binaryTree *root;
    root=t1;
    t1->left=t2;
    t2->right=t3;
    t3->left=t4;
    t3->right=t5;

}
