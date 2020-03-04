#include<stdio.h>
#include<string.h>
struct student
{
    int id;
    char name[10];
};
int main()
{
    struct student s1,s3;
    struct student s2[2];
    struct student *s9=&s3;
    s1.id=10;
    strcpy(s1.name,"khaled");
    printf("d\n",s1.id);
    printf("%s\n",s1.name);
    s2[0].id=13;
    strcpy(s2[0].name,"rohim");
    printf("%d\n%s\n",s2[0].id,s2[0].name);
    s2[1].id=14;
    strcpy(s2[1].name,"kohim");
    printf("%d\n%s\n",s2[1].id,s2[1].name);
    s2[2].id=15;
    strcpy(s2[2].name,"ima");
    printf("%d\n%s\n",s2[2].id,s2[2].name);
    s9->id=18;
    strcpy(s9->name,"modolis");
    printf("%d\n%s\n",s9->id,s9->name);
    return 0;

}
