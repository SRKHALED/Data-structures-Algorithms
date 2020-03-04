#include<stdio.h>
int main()
{
    int i,x=1;
    float sum=0.0;
    for(i=1; i>0; i++)
    {
        sum+=(float)x/(i*i);
        if(i*i==400)
            break;
    }
    printf("%f\n",sum);
    return 0;
}
