#include<stdio.h>
struct student
{
    char name[50];
    int roll;
    int sub1;
    int sub2;
    int sub3;
};
int total_marks(struct student s)
{
    return s.sub1+s.sub2+s.sub3;
}
void display(struct student s)
{
    printf("student information");
    printf("\nName:%s",s.name);
    printf("\nroll:%d",s.roll);
    printf("\nsub1:%d",s.sub1);
    printf("\nsub2:%d",s.sub2);
    printf("\nsub3:%d",s.sub3);
    printf("total marks:%d",total_marks(s));    
}
int main()
{
    struct student s[3];
    for(int i=0;i<3;i++)
    {
        printf("enter the detial of student %d\n",i+1);
        printf("Name:");
        scanf("%s",&s[i].name);
        printf("Roll Number");
        scanf("%d",&s[i].roll);
        printf("marks of student 1");
        scanf("%d",&s[i].sub1);
        printf("marks of student 2");
        scanf("%d",&s[i].sub2);
        printf("marks of student 3");
        scanf("%d",&s[i].sub3);
    }
    for(int i=0;i<3;i++)
    {
        display(s[i]);
    }
    return 0;
    
}

