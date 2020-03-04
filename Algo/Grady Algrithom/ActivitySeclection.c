#include<stdio.h>
int activity(int n, int s[],int e[])
{
    int i,j=0,k=1,m=0;
    printf("A-1 Yes\n");
    for(i=0; i<n; i++)
    {
        if(e[j]<=s[k])
        {
            m++;
            j=k;
            k++;
            if(i<n-1)
                printf("A-%d Yes\n",i+2);
        }
        else
        {
            k++;
            if(i<n-1)
                printf("A-%d NO\n",i+2);
        }
    }
    return m;
}
int main()
{
    int n,s[100],e[100],i,m;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d %d",&s[i],&e[i]);
    }
    m=activity(n,s,e);
    printf("Maximum Activity :%d",m);
}
