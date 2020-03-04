#include<stdio.h>
int Factorial(int n)
{
    if(n==0)
        return 1;
    else
        return n*Factorial(n-1);
}
int main()
{
    int n,f;
    scanf("%d",&n);
    f=Factorial(n);
    printf("Factorial of %d = %d",n,f);
    return 0;
}
