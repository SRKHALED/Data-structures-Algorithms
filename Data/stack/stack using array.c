#include<stdio.h>
#include<limits.h>
struct stack
{
    unsigned capacity;
    int top;
    int *array;
};
struct stack *makeStack(int capacity)
{
    struct stack *newstack=(struct stack *)malloc(sizeof(struct stack));
    newstack->capacity=capacity;
    newstack->top=-1;
    newstack->array=(int *)malloc(capacity*sizeof(int));
    return newstack;
}
int isfull(struct stack *s)
{
    return (s->top==s->capacity-1);
}
int isempty(struct stack *s)
{
    return (s->top==-1);
}
void push(struct stack *s,int item)
{
    if(isfull(s))
    {
        printf("Overflow\n");
        return ;
    }
    s->top=s->top+1;
    s->array[s->top]=item;
}
int pop(struct stack *s)
{
    if(isempty(s))
    {
        printf("Underflow\n");
        return ;
    }
    int item=s->array[s->top];
    s->top=s->top-1;
    return item;
}
int peek(struct stack *s)
{
    if(isempty(s))
    {
        printf("underflow\n");
        return INT_MIN;
    }
    int item=s->array[s->top];
    return item;
}
int main()
{
    int capacity,data;
    printf("How many data  ");
    scanf("%d",&capacity);
    struct stack *s=makeStack(capacity);
    printf("Enter some positive data\n");
    scanf("%d",&data);
    while(data>=0)
    {
        push(s,data);
        if(isfull(s))
        {
            printf("stack is full\n");
            break;
        }
        scanf("%d",&data);
    }
    //printf("PEEK %d",peek(&s));
    printf("Popping .. \n");
    while(!isempty(s))
    {
        printf("%d\t",pop(s));
    }
}
