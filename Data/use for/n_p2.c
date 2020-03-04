#include<stdio.h>
int main()
{
    int i,j,k,n,m=1;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        for(j=n-1; j>i; j--)
            printf(" ");
        for(k=0; k<2*i+1; k++)
        {
            if(m>9)
                m=0;
            printf("%d",m);
                m++;
        }
        printf("\n");
    }
}
