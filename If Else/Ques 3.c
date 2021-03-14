#include<stdio.h>
int main()
{
    int num;
    printf("input the value =",num);
    scanf("%d",&num);
    if (num>0)
    {
        printf("number is positive");
    }
    else if (num<0)
    {
        printf("number is negative");
    }
    else
    {
        printf("the number is Zero");
    }
    return 0;
}
