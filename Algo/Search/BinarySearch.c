#include<stdio.h>
int BinarySearch(int a[],int n,int item)
{
    int f=0,r=n,m;
    while(f<=r)
    {
        m=(f+r)/2;
        if(item==a[m])
            return m+1;
        if(item>a[m])
            f=m+1;
        if(item<a[m])
            r=m-1;
    }
    return -1;
}
int main()
{
    int a[]={1,2,3,4,5,6},n,i,BS;
    n=sizeof(a)/sizeof(a[0]);
    printf("Enter item \n");
    scanf("%d",&i);
    BS=BinarySearch(a,n,i);
    if(BS==-1)
        printf("Item is not found");
    else
        printf("Item is found in position %d",BS);
    return 0;
}
