#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number =",num);
    scanf("%d",&num);
    if (num%(-1) == (-num))
    {
        printf("number is positive",num);
    }
    else
    {
        printf("number is negative",num);
    }
    return 0;
}
