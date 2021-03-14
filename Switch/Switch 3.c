#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age:");
    scanf("%d",&age);

    switch(age>=18)
    {
    case 1:
    {
        printf("you are eligible for cast your vote");
    }
    break;

    default:
        printf("you are not eligible for cast your vote");

    break;
    }
    return 0;
}
