#include<stdio.h>
void T(int a[],int size)
{
    int i;
    for(i=0; i<size; i++)
        printf("%d ",a[i]);
    printf("\n");
}
int DD(int a[],int size,int loc)
{
    if(loc>=size)
    {
        printf("Under flow \n");
        return size;
    }
    int i;
    for(i=loc; i<size; i++)
    {
        a[i]=a[i+1];
    }
    return --size;
}
int main()
{
    int arr[]={1,3,4,9,5,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    T(arr,size);
    int l;
    scanf("%d",&l);
    size=DD(arr,size,l-1);
    T(arr,size);
    return 0;
}
