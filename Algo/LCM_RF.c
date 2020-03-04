#include<stdio.h>
int LCM(int a,int b)
{
    if(a%b==0)
        return b;
    return LCM(a,a%b);
}
int main()
{
    int a,b,lcm,s;
    scanf("%d%d",&a,&b);
    if(b>a)
    {
        int temp=a;
        a=b;
        b=temp;
    }
    s=a*b;
    lcm=s/LCM(a,b);
    printf("%d",lcm);
    return 0;
}
