#include<stdio.h>
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void travers(int a[],int size)
{
    int i;
    for(i=0; i<size; i++)
        printf("%d ",a[i]);
    printf("\n");
}
void insertionSort(int a[],int size)
{
    int i,j,key;
    for(i=1; i<size; i++)
    {
        key=a[i];
        j=i-1;
        while(j>=0&&a[j]>key)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
    }
}
/*
    int i,j;
    for(i=0; i<size-1; i++)
    {
        for(j=i+1; j>0; j--)
        {
            if(a[j]<a[j-1])
            {
                swap(&a[j],&a[j-1]);
            }
            else
                break;
        }
    }
}*/
int main()
{
    int arr[]={9,8,10,5,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("Befor sorting :\n");
    travers(arr,size);
    insertionSort(arr,size);
    printf("After sorting :\n");
    travers(arr,size);
    return 0;
}
