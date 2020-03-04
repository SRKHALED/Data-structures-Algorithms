#include<stdio.h>
int LCM(int x,int y)
{
    int i;
    for(i=x; i>0; i--)
    {
        if((x%i==0)&&(y%i==0))
            return (x*y)/i;
    }

}
int main()
{
    int a,b,l;
    scanf("%d%d",&a,&b);
    l=LCM(a,b);
    printf("%d",l);
}
