
///Structure inside Structure or
///Nested Structure

#include<stdio.h>

struct nametype
{
    char first[20];
    char last[20];
};

struct student
{
    int id;
    struct nametype name;
};

int main()
{
    struct student st;

    printf("Enter the Student ID: ");
    scanf("%d",&st.id);

    printf("Enter the Student first Name: ");
    scanf("%s",st.name.first);

    printf("Enter the Student last Name: ");
    scanf("%s",st.name.last);

    printf("ID: %d\n",st.id);
    printf("Name: %s %s\n",st.name.first,st.name.last);

    return 0;
}
