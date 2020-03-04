#include<stdio.h>
int main()
{
    int i,x=1;
    float sum=0.0;
    for(i=1; i<=1024; i++)
    {
        if(i%2==0)
            sum-=(float)1/x;
        else
            sum+=(float)1/x;
        x*=2;
    }
    printf("%f\n",sum);
}
