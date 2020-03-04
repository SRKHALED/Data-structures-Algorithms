 #include<stdio.h>
#include<limits.h>
struct queue
{
    unsigned int capacity;
    int front,rear,noe,*array;
};
struct queue *makequeue(int capacity)
{
    struct queue *q=(struct queue *)malloc(sizeof(struct queue));
    q->capacity=capacity;
    q->front=0;
    q->rear=(capacity-1);
    q->noe=0;
    q->array=(int *)malloc(capacity*sizeof(int));
    return q;
}
int isFull(struct queue *q)
{
    return(q->noe==q->capacity);
}
int isEmpty(struct queue *q)
{
    return(q->noe==0);
}
void enqueue(struct queue *q,int item)
{
    if(isFull(q))
    {
        printf("Queue is Overflow\n");
        return ;
    }
    q->rear=(q->rear+1)%q->capacity;
    q->array[q->rear]=item;
    q->noe=q->noe+1;
}
int dequeue(struct queue *q)
{
    if(isEmpty(q))
    {
        printf("Underflow\n");
        return INT_MIN;
    }
    int item=q->array[q->front];
    q->front=(q->front+1)%q->capacity;
    q->noe=q->noe-1;
    return item;
}
int frontData(struct queue *q)
{
    if(isEmpty(q))
    {
        printf("Queue underflow \n");
        return INT_MIN;
    }
    int item=q->array[q->front];
    return item ;
}
int reartData(struct queue *q)
{
    if(isEmpty(q))
    {
        printf("Queue underflow \n");
        return INT_MIN;
    }
    int item=q->array[q->rear];
    return item ;
}
int main()
{
    int capacity,data;
    printf("Enter capacity  ");
    scanf("%d",&capacity);
    struct queue *q=makequeue(capacity);
    printf("Enter positive data\n");
    scanf("%d",&data);
    while(data>=0)
    {
        enqueue(q,data);
        if(isFull(q))
        {
            printf("Queue is Full\n");
            break ;
        }
        scanf("%d",&data);
    }
    printf("Front data= %d\n",frontData(q));
    printf("Rear data= %d\n",reartData(q));
    printf("Deleting from queue \n");
    while(!isEmpty(q))
    {
        printf("%d\t",dequeue(q));
    }
}
