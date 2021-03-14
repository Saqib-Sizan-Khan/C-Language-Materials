#include<stdio.h>
#include<string.h>
struct Person
{
    char name[50];
    int age;
    float salary;
};

void display(struct Person p)
{
    printf("\n\nName: %s\n",p.name);
    printf("Age: %d\n",p.age);
    printf("Salary: %f\n",p.salary);
}
int main()
{
    struct Person person1,person2;
    int i;

    strcpy(person1.name,"Saqib Sizan");
    person1.age= 22;
    person1.salary= 56554.76;
    display(person1);

    strcpy(person2.name,"Sabbir Chowdhury");
    person2.age= 21;
    person2.salary= 47554.55;
    display(person2);

    return 0;
}

