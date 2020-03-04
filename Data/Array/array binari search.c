#include<stdio.h>
int BS(int a[],int BEG,int END,int I)
{
    while(BEG<=END)
    {
        int m=(BEG+END)/2;
        if(I==a[m])
            return m+1;
        if(I>m)
            BEG=m+1;
        else
            END=m-1;
    }
    return -1;
}
int main()
{
    int arr[]={1,2,3,4,5,9};
    int n,s;
    printf("Enter item :");
    scanf("%d",&n);
    s=BS(arr,0,5,n);
    if(s==-1)
        printf("ITEM is not found\n");
    else
        printf("ITEM is found in location number %d\n",s);

    return 0;
}


