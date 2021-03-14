#include<stdio.h>
int main()
{
    int grade;
    printf("input the grade=",grade);
    scanf("%d",&grade);
    switch(grade)
    {
    case 4: printf("great");
            break;
    case 3: printf("good");
            break;
    case 2: printf("avarage");
            break;
    case 1: printf("poor");
            break;
    case 0: printf("fail");
            break;
    default: printf("illegal");

    }

    return 0;
}
