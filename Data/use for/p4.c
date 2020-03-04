#include<stdio.h>
int main()
{
    int i,x=1;
    float sum=0.0;
    for(i=1; i>0; i++)
    {
        if(x>59049)
            break;
         x*=3;
        if(i%2==0)
            sum-=(float)1/x;
        else
            sum+=(float)1/x;
    }
    printf("%f\n",sum);
}
