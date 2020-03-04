#include<stdio.h>
void TVA(int a[],int size)
{
    int i;
    for(i=0; i<size; i++)
        printf("%d ",a[i]);
    printf("\n");
    return ;
}
int MA(int a[],int size)
{
    int i;
    for(i=0; i<size; i++)
        a[i]=a[i]*2;
    return a;
}
int main()
{
    int arr[]={1,9,8,6,4,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    TVA(arr,size);
    int *p;
    *p=MA(arr,size);
    TVA(arr,size);
    return 0;
}

