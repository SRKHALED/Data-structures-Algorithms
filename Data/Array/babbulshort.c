#include<stdio.h>
void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
void traverse(int a[],int size)
{
    int i;
    for(i=0; i<size; i++)
        printf("%d ",a[i]);
    printf("\n");
}
void BABBLE(int a[],int size)
{
    int i,j,temp;
    for(i=0; i<size-1; i++)
    {
        for(j=0; j<size-i-1; j++)
        {
            if(a[j]>a[j+1])
            {
                swap(&a[j],&a[j+1]);
            }
        }
    }
}
int main()
{
    int arr[]={1,8,6,4,9,0,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("Before shorting :\n");
    traverse(arr,size);
    BABBLE(arr,size);
    printf("After shorting :\n");
    traverse(arr,size);

}
