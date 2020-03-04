#include<stdio.h>
int main()
{
    int n,x=0,y=1,z,i;
    scanf("%d",&n);
    if(n>1)
    {
        for(i=2; i<=n; i++)
        {
            z=x+y;
            x=y;
            y=z;

        }
        printf("%d",z);
    }
    if(n==0)
        printf("%d",x);
    if(n==1)
         printf("%d",y);
    return 0;
}
