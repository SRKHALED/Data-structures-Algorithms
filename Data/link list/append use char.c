#include<stdio.h>
struct node
{
    char data;
    struct node *next;
};
struct node *makeNode(char item)
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
        printf("%c",ptr->data);
        ptr=ptr->next;
    }
}
void APPEND(struct node **head,char data)
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
int main()
{
    struct node *head=NULL;
    char data;
    printf("Enter charter data\n");
    scanf("%c",&data);
    while(data!='\n')
    {
        APPEND(&head,data);
        scanf("%c",&data);
    }
    printf("Traversing...\n");
    traverse(head);
}
