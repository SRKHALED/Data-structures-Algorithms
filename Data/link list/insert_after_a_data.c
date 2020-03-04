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
void APPEND(struct node **head,int data)
{
    struct node *n=makeNode(data);
    if(*head==NULL)
    {
        *head=n;
        return;
    }
    struct node *ptr=*head,*temp;
    while(ptr!=NULL)
    {
        temp=ptr;
        ptr=ptr->next;
    }
    temp->next=n;
}
void InsertData(struct node **head,int key,int item)
{
    struct node *n=makeNode(item);
    struct node *ptr=*head,*temp;
    while(ptr->data!=key)
    {
        ptr=ptr->next;
        temp=ptr;
    }
    ptr->next=n;
    n->next=temp;
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
    printf("Before inserting traverse..\n");
    traverse(head);
    int key,i;
    printf("\nEnter a data and item before insert  \n");
    scanf("%d %d",&key,&i);
    InsertData(&head,key,i);
    printf("After inserting traverse..\n");
    traverse(head);
}

