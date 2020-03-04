#include<stdio.h>
#include<limits.h>
struct queue
{
    int data;
    struct queue *next;
};
struct queue *makequeue(int item)
{
    struct queue *nq=(struct queue *)malloc(sizeof(struct queue));
    nq->data=item;
    nq->next=NULL;
    return nq;
}
void enqueue(struct queue **q,int item)
{
    struct queue *nq=makequeue(item);
    if(*q==NULL)
    {
        *q=nq;
        return ;
    }
    struct queue *ptr=*q,*temp;
    while(ptr!=NULL)
    {
        temp=ptr;
        ptr=ptr->next;
    }
    temp->next=nq;
}
int dequeue(struct queue **q)
{
    if(*q==NULL)
    {
        printf("Under flow\n");
        return INT_MIN;
    }
    struct queue *temp=*q;
    int item;
    item=temp->data;
    *q=temp->next;
    free(temp);
    return item;
}
int main()
{
    struct queue *q=NULL;
    int data;
    scanf("%d",&data);
    while(data>=0)
    {
        enqueue(&q,data);
        scanf("%d",&data);
    }
    while(q!=NULL)
    {
        printf("%d ",dequeue(&q));
    }
}
