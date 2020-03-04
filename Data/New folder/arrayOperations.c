#include<stdio.h>
#define MAX 10
void traverse(int a[],int size)
{
    int i;
    for(i=0; i<size; i++)
        printf("%d ",a[i]);
    printf("\n");
}
int insertArray(int a[],int size,int data,int loc)
{
    if(size == MAX)
    {
        printf("Array Overflow.\n");
        return size;
    }
    int i;
    for(i=size; i>loc; i--)
    {
        a[i] = a[i-1];
    }
    a[loc] = data;
    return ++size;
}

int insertAtEnd(int a[],int size,int data)
{
    a[size++] = data;
    return size;
}

int deleteArray(int a[],int size,int loc)
{
    int item = a[loc];
    //Check Underflow
    if(loc>=size)
    {
        printf("Array Underflow.\n");
        return size;
    }
    int i;
    for(i=loc; i<size; i++)
    {
        a[i] = a[i+1];
    }
    return --size;
}

int main()
{
    int arr[MAX],size=0,data,loc;
    printf("Enter Data(Negative to terminate):\n");
    scanf("%d",&data);
    while(data>=0)
    {
        size = insertAtEnd(arr,size,data);
        if(size == MAX)
        {
            printf("Array is Full.\n");
            break;
        }
        scanf("%d",&data);
    }

    printf("\nEnter data and location:\n");
    printf("Data:");
    scanf("%d",&data);
    printf("Location:");
    scanf("%d",&loc);

    if(loc<=size)
        size = insertArray(arr,size,data,loc-1);
    else
        printf("Provided location is more than array size.\n");
    //printf("\n%d\n",size);
    printf("After Insertion:\n");
    traverse(arr,size);
    printf("\nEnter location to delete:\n");
    printf("Location:");
    scanf("%d",&loc);
    if(loc<=size)
        size = deleteArray(arr,size,loc-1);
    else
        printf("Provided location is more than array size.\n");
    printf("After Deletion:\n");
    traverse(arr,size);
}
