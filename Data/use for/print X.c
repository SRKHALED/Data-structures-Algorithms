#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    if(n%2!=0)
    {
        for(i=1; i<=n; i++)
        {
            for(j=1; j<i; j++)
                printf(" ");
            for(j=i; j<=n/i; j++)
                printf("*");
            printf("\n");
        }
    }
}
