#include<stdio.h>
void T(int a[],int size)
{
    int i;
    for(i=0; i<size; i++)
        printf("%d ",a[i]);
    printf("\n");
}
int IDE(int a[],int size,int data)
{
    size++;
    a[size-1]=data;
    return size;
}
int main()
{
    int arr[]={1,3,5,4,9,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    T(arr,size);
    int d;
    scanf("%d",&d);
    size=IDE(arr,size,d);
    T(arr,size);
    return 0;
}


