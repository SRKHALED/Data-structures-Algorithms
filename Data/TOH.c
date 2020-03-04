#include<stdio.h>
void TOH(int n,char a,char b,char c)
{
    if(n==1)
    {
        printf("%c -> %c\n",a,c);
        return ;
    }
    TOH(n-1,a,c,b);
    printf("%c -> %c\n",a,c);
    TOH(n-1,b,a,c);
}
int main()
{
    int n;
    printf("Enter the number of disk: ");
    scanf("%d",&n);
    TOH(n,'A','B','C');
    return 0;
}
