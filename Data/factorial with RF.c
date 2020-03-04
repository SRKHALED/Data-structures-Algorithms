#include<stdio.h>
int fac(int n)
{
    if(n==0)
        return 1;
    return n*fac(n-1);
}
int main()
{
    int n,f;
    scanf("%d",&n);
    f=fac(n);
    printf("%d",f);
    return 0;
}
