
///Structure with pointer declaration

#include<stdio.h>

struct Student
{
    char name[20];
    int id;
};

int main()
{
    struct Student *student,st;
    char a;

    student = &st;

    printf("Enter Student ID: ");
    scanf("%d%c",&student->id,&a);

    printf("Enter Student Name: ");
    gets(student->name);

    printf("Student ID: %d\n",student->id);
    printf("Student Name: %s\n",student->name);

    return 0;
}

