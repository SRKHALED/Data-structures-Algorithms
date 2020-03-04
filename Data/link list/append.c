#include<stdio.h>
struct node
{
    int data;
    struct node *next;
};
struct node *makeNode(int item)
{
    struct node *newNode=(struct node *)malloc(sizeof(struct node));
    newNode->data=item;
    newNode->next=NULL;
    return newNode;
}
void APPEND(struct node **headrf,int data)
{
    struct node *n=makeNode(data);
    if(*headrf==NULL)
    {
        *headrf=n;
        return ;
    }
    struct node *ptr=*headrf,*temp;
    while(ptr!=NULL)
    {
        temp=ptr;
        ptr=ptr->next;
    }
    temp->next=n;
}
void traverse(struct node *head)
{
    struct node *ptr;
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d\t",ptr->data);
        ptr=ptr->next;
    }
}
int main()
{
    struct node *head=NULL;
    int data;
    printf("Enter positive data\n");
    scanf("%d",&data);
    while(data>=0)
    {
        APPEND(&head,data);
        scanf("%d",&data);
    }
    printf("Traversing...\n");
    traverse(head);
}
