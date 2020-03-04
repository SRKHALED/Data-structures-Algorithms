#include<stdio.h>
int fibo(int n)
{
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    return fibo(n-1)+fibo(n-2);
}
int main()
{
    int i,n,F;
    scanf("%d",&n);
    for(i=0; i<=n; i++)
    {
        F=fibo(n-(n-i));
        printf("fibo %d -> %d\n",i,F);
    }
    return 0;
}
