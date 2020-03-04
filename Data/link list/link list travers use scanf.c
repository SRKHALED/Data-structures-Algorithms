#include<stdio.h>
struct node
{
    int data;
    struct node *next;
};
struct node *MKN(int item)
{
    struct node *n=(struct node*)malloc(sizeof(struct node));
    n->data=item;
    n->next=NULL;
    return n;
}
void traverse(struct node *head)
{
    struct node *ptr;
    ptr = head;
    while(ptr!=NULL)
    {
        printf("%d",ptr->data);
        ptr=ptr->next;
        printf("\t");
    }
}
int main()
{
    int i,n,data;
    printf("How many data\n");
    scanf("%d",&n);
    struct node *a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&data);
        a[i]=MKN(data);
    }
    struct node *head;
    head=a[0];
    for(i=0; i<n-1; i++)
    {
        a[i]->next=a[i+1];
    }
    printf("Traverse  :");
    traverse(head);
    return 0;
}
