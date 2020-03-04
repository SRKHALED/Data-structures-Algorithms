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
void delete(struct node **headrf,int key)
{
    struct node *ptr=*headrf,*prevNode;
    if (ptr==NULL)
    {
        printf("Underflow\n");
        return ;
    }
    if((ptr->data==key)&&(ptr!=NULL))
    {
        *headrf=ptr->next;
        free(ptr);
        return;
    }
    while((ptr!=NULL)&&(ptr->data!=key))
    {
        prevNode=ptr;
        ptr=ptr->next;
    }
    if (ptr==NULL)
    {
        printf("key is not found\n");
        return ;
    }
    prevNode->next=ptr->next;
    free(ptr);
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
    printf("Before deleting traverse..\n");
    traverse(head);
    int key;
    printf("\nEnter data to delete\n");
    scanf("%d",&key);
    delete(&head,key);
    printf("After deleting traverse..\n");
    traverse(head);
}
