#include<stdio.h>
int Fibonacci(int n)
{
    if(n==1||n==2)
        return 1;
    else
        return Fibonacci(n-1)+Fibonacci(n-2);
}
int main()
{
    int n,f;
    scanf("%d",&n);
    f=Fibonacci(n);
    printf("Fibonacci of %d = %d",n,f);
    return 0;
}
