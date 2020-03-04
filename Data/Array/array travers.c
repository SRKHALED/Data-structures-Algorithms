#include<stdio.h>
int main()
{
    int a[]={1,2,3},i,size;
    size = sizeof(a)/sizeof(a[0]);
    for(i=0; i<size; i++)
    {
        printf("%d\t",a[i]);
    }
    i=0;
    while(i<size)
    {
        a[i]=a[i]+10;
        printf("%d\t",a[i]);
        i++;
    }
}
