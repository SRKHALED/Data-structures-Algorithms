#include<stdio.h>
int main()
{
    int n,prod=1,x,i;
    printf("How manny number input :\n");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&x);
        prod*=x;
    }
    printf("Result : %d",prod);
    return 0;
}
