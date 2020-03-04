#include<stdio.h>
int GCD(int x,int y)
{
    int i;
    for(i=x; i>0; i--)
    {
        if((x%i==0)&&(y%i==0))
            return i;
    }
}
int main()
{
    int a,b,G;
    scanf("%d %d",&a,&b);
    G=GCD(a,b);
    printf("%d",G);
}
