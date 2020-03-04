#include<stdio.h>
int main()
{
    int n,r1,R1,r2,R2;
    scanf("%d",&n);
    r1=n/100;
    R1=n%100;
    r2=R1/10;
    R2=R1%10;
    int x=r1+r2*10+R2*100;
    if(x==n)
        printf("Palimdrom number");
    else
        printf("Not palindrom number");
    return 0;
}

