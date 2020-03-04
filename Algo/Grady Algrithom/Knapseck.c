#include<stdio.h>
void swap(int *x, int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
void sort(int n,int w[],int p[], float d[])
{
    int i,j;
    float temp2;
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(d[i]<d[j])
            {
                temp2=d[j];
                d[j]=d[i];
                d[i]=temp2;
                swap(&w[i],&w[j]);
                swap(&p[i],&p[j]);

            }
        }
    }
}
float knapsack(int n, int w[],int p[],float d[],int c)
{
    int tw=0,i=0;
    float tp;
    while(tw!=c)
    {
        if(tw+w[i]<c)
        {
            tw+=w[i];
            tp+=p[i];
        }
        else
        {
            int x=c-tw;
            tw+=x;
            tp+=x*d[i];
        }
        i++;
    }
    return tp;

}
int main()
{
    int n,w[20],p[20],i,c;
    float d[20],k;
    printf("Enter number of element :");
    scanf("%d",&n);
    printf("Enter weight and profit \n");
    for(i=0; i<n; i++)
    {
        scanf("%d %d",&w[i],&p[i]);
        d[i]=(p[i])/((float)w[i]);
    }
    sort(n,w,p,d);
    printf("Enter capacity: ");
    scanf("%d",&c);
    k=knapsack(n,w,p,d,c);
    printf("Max profit : %f",k);
    return 0;

}
