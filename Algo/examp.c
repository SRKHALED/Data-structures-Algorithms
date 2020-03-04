#include<stdio.h>
void sort(int w[],int p[],float d[],int n)
{
    int i,j,te1;
    float te2;
    for(i=0;  i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(d[i]<d[j])
            {
                te1=w[i];
                w[i]=w[j];
                w[j]=te1;

                te1=p[i];
                p[i]=p[j];
                p[j]=te1;

                te2=d[i];
                d[i]=d[j];
                d[j]=te2;
            }
        }
    }
}
float kp(int w[],int p[],float d[],int c)
{
    int tw=0,i=0;
    float tp=0;
    while(tw<c)
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
   int w[100],p[100],n,i;
   float d[100],fc;
   scanf("%d",&n);
   for(i=0; i<n; i++)
   {
       scanf("%d",&w[i]);
       scanf("%d",&p[i]);
       d[i]=p[i]/(float)w[i];
   }
   sort(w,p,d,n);
   int c;
   scanf("%d",&c);
   fc=kp(w,p,d,c);
   printf("%f",fc);
    return 0;
}
