#include<stdio.h>
union student
{
    char name[50];
    int roll;
    float perc;
};
int main()
{
    union student s;
    printf("enter the detial of student\n");
    printf("Name:");
    scanf("%s",&s.name);
    printf("Roll Number:");
    scanf("%s",&s.roll);
    printf("percentage:");
    scanf("%s",&s.perc);

    printf("student information");
    printf("\nName:%s",s.name);
    printf("\nroll:%d",s.roll);
    printf("\nPercentage:%f",s.perc);

    return 0;
}