#include<stdio.h>
struct node
{
    int data;
    struct node *Next;
};
struct node *makeNode(int item)
{
    struct node *newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=item;
    newNode->Next=NULL;
    return newNode;
}
void traverse(struct node *head)
{
    struct node *ptr;
        ptr=head;
        while(ptr!=NULL)
        {
            printf("%d ",ptr->data);
            ptr=ptr->Next;
            printf("\n");
        }
        return ;
}
int main()
{
    struct node *n1=makeNode(10);
    struct node *n2=makeNode(20);
    struct node *n3=makeNode(30);
    struct node *head;
    head=n1;
    n1->Next=n2;
    n2->Next=n3;
    traverse(head);
}
