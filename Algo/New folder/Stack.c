#include<stdio.h>
#include<limits.h>
struct stacknode
{
    int data;
    struct stacknode *next;
};
struct stacknode *makeStack(int item)
{
    struct stacknode *newstack=(struct stacknode *)malloc(sizeof(struct stacknode));
    newstack->data=item;
    newstack->next=NULL;
    return newstack;
}
int isEmpty(struct stacknode *tos)
{
    return !tos;
}
void push(struct stacknode **tos,int item)
{
    struct stacknode *s=makeStack(item);
    s->next=*tos;
    *tos=s;
}
int pop(struct stacknode **tos)
{
    if(isEmpty(*tos))
    {
        printf("Underflow \n");
        return INT_MIN;
    }
    struct stacknode *temp=*tos;
    int item=(*tos)->data;
    *tos=(*tos)->next;
    free(temp);
    return item;
}
int main()
{
    struct stacknode *tos=NULL;
    printf("Enter positive data \n");
    int data;
    scanf("%d",&data);
    while(data>=0)
    {
        push(&tos,data);
        scanf("%d",&data);
    }
    printf("Popping..\n");
    //pop(&tos);
    //printf("%d",pop(&tos));
    while(!isEmpty((tos)))
    {
        printf("%d\t",pop(&tos));
    }
}
