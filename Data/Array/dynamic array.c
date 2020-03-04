#include<stdio.h>
int *createDynamicArray(int size)
{
    int *arr=(int *)malloc(size*sizeof(int));
    return arr;
}
int main()
{
    int *a=createDynamicArray(3);
    int i;
    for(i=0; i<3; i++)
        a[i]=i+2;
    for(i=0; i<3; i++)
        printf("%d ",a[i]);
    return 0;
}
