#include<stdio.h>
int LS(int a[],int size,int I)
{
    int i;
    for(i=0; i<size; i++)
    {
        if(a[i]==I)
            return ++i;
    }
    return -1;
}
int main()
{
    int arr[]={1,9,8,6,4,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    int n,s;
    printf("Enter item :");
    scanf("%d",&n);
    s=LS(arr,size,n);
    if(s==-1)
        printf("ITEM is not found\n");
    else
        printf("ITEM is found in location number %d\n",s);

    return 0;
}


