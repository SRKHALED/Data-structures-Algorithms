#include<stdio.h>
int main()
{
    int i,x=1;
    float sum=0.0;
    for(i=1; i<=20; i++)
    {
        sum=sum+x/(float)i;
    }
    printf("%f\n",sum);
    return 0;
}
