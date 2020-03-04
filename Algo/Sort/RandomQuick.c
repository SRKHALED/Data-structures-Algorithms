#include<stdio.h>
void swap(int *x,int *y)
{
    int temp = *x;
    *x= *y;
    *y= temp;
}
int partition(int a[],int s,int e)
{
    int pivot = a[e];
    int pIndex = s,i;
    for(i=s; i<e; i++)
    {
        if(a[i]<=pivot)
        {
            swap(&a[i],&a[pIndex]);
            pIndex++;
        }
    }
    swap(&a[pIndex],&a[e]);
    return pIndex;
}
int random(int s,int e)
{
    int x= (rand()%(e-s+1))+s;
    return x;
}
int Random_partition(int a[], int s, int e)
{
    int i = random(s,e);
    swap(&a[e],&a[i]);
    return partition(a,s,e);

}
int QuickSort(int a[],int s,int e)
{
    int pIndex;
    if(s<e)
    {
    pIndex = Random_partition(a,s,e);
    //printf("%d \n",pIndex);
    QuickSort(a,s,pIndex-1);
    QuickSort(a,pIndex+1,e);
    }
    else
        return;
}
void printArray(int arr[], int n)
{
    int i;
    for (i=0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int main()
{
    int a[]= {3,2,1,4,7,9,6};
    int s=0;
    int size= sizeof(a)/sizeof(a[0]);
    int e= size-1;
    QuickSort(a,s,e);
    printArray(a,size);

}
