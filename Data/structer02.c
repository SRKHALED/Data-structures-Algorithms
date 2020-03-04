#include<stdio.h>
#include<string.h>
struct product
{
    int id;
    char name[25];
    int quantity;
};
int main()
{
    struct product p1,p2[3],p4,*p3=&p4;
    p1.id=1;
    strcpy(p1.name,"shop");
    p1.quantity=20;
    p2[0].id=2;
    strcpy(p2[0].name,"shampu");
    p2[0].quantity=2;
    p2[1].id=3;
    strcpy(p2[1].name,"lution");
    p2[1].quantity=9;
    p2[2].id=55;
    strcpy(p2[2].name,"foundation");
    p2[2].quantity=50;
    p2[3].id=26;
    strcpy(p2[3].name,"fase");
    p2[3].quantity=20;
    int i;
    for(i=0; i<=3; i++)
    {
        printf("%d\n%s\n%d\n\n",p2[i].id,p2[i].name,p2[i].quantity);
    }
    scanf("%d",&p3->id);
    scanf("%s",&p3->name);
    scanf("%d",&p3->quantity);
}
