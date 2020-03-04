#include<stdio.h>
void travers(int a[],int size)
{
    int i;
    for(i=0; i<size; i++)
        printf("%d ",a[i]);
    printf("\n");
}
void swap(int *x,int *y)
{
    int temp ;
    temp=*x;
    *x=*y;
    *y=temp;
}
selectionsort(int a[],int size)
{
    int i,j,min,minIndex;
    for(i=0; i<size-1; i++)
    {
        min=a[i];
        minIndex=i;
        for(j=i+1; j<size; j++)
        {
            if(a[j]<min)
            {
                min=a[j];
                minIndex=j;
            }
        }
        swap(&a[i],&a[minIndex]);
    }
}
int main()
{
    int arr[]={64,25,15,20,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("Befor sorting :\n");
    travers(arr,size);
    selectionsort(arr,size);
    printf("After sorting :\n");
    travers(arr,size);

}
