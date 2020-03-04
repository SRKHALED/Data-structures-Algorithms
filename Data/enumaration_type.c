#include<stdio.h>
char* sstring[]={"S","M","L","XL"};
int main()
{
    enum shirtsize
    {
        S,M,L,XL
    };
    enum shirtsize s1,s2,s3;
        s1=M;
        s2=S;
        s3=XL;
        printf("%d\n",s2);
        printf("%s",sstring[s3]);
        return 0;
}
