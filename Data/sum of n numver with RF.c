#include<stdio.h>
int sum(int n)
{
    if(n==1)
        return 1;
    return n+sum(n-1);
}
int main()
{
    int n,s;
    scanf("%d",&n);
    s=sum(n);
    printf("%d",s);
    return 0;
}
