#include<stdio.h>
int main()
{
    int n,r1,R1,r2,R2;
    scanf("%d",&n);
    r1=n/100;
    R1=n%100;
    r2=R1/10;
    R2=R1%10;
    int x=r1*r1*r1+r2*r2*r2+R2*R2*R2;
    if(x==n)
        printf("Armstrong number");
    else
        printf("Not armsrtong number");
    return 0;
}
