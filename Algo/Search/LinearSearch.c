#include<stdio.h>
int LinearSearch(int a[],int n,int item)
{
    int i;
    for(i=0; i<n; i++)
    {
        if(a[i]==item)
            return ++i;
    }
    return -1;
}
int main ()
{
    int a[100],n,i,item,LS;
    printf("Enter size of array :");
    scanf("%d",&n);
    printf("Enter array element ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter item ");
    scanf("%d",&item);
    LS=LinearSearch(a,n,item);
    if(LS==-1)
        printf("Item is not found");
    else
        printf("Item is found in position %d",LS);
    return 0;
}
