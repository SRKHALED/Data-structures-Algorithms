#include<stdio.h>
int GCD(int a,int b)
{
    if(a%b==0)
        return b;
    return GCD(a,a%b);
}
int main()
{
    int a,b,gcd;
    scanf("%d%d",&a,&b);
    if(b>a)
    {
        int temp=a;
        a=b;
        b=temp;
    }
    gcd=GCD(a,b);
    printf("%d",gcd);
    return 0;
}
