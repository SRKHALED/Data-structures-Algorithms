#include<stdio.h>
int linearSearch(int a[],int size,int item)
{
    int i;
    for(i=0; i<size; i++)
    {
        if(a[i] == item)
            return i+1;
    }
    return -1;
}

int main()
{
    int item;
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Enter an Item to search:");
    scanf("%d",&item);
    int loc = linearSearch(arr,size,item);
    if(loc == -1)
        printf("Item Not Found.");
    else
        printf("Item Found in location: %d\n",loc);
}
