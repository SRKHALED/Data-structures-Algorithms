#include<stdio.h>
# define MAX 10;
void T(int a[],int size)
{
    int i;
    for(i=0; i<size; i++)
        printf("%d ",a[i]);
    printf("\n");
}
int ID(int a[],int size,int data,int loc)
{
    if(loc>=size)
    {
        printf("Overflow\n");
        return size;
    }
    int i;
    for(i=size; i>loc; i--)
        a[i]=a[i-1];
    a[loc]=data;
    return ++size;
}
int main()
{
    int arr[]={1,3,5,4,9,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    /*if(size >= MAX)
        printf("Array is full");
    else
    {*/
        printf("Befor inserting \n");
        T(arr,size);
        int d,l;
        printf("Enter Data and locton\n");
        scanf("%d %d",&d,&l);
        size=ID(arr,size,d,l-1);
        printf("After insrting\n");
        T(arr,size);
        return 0;

}



