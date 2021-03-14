#include<stdio.h>
int main()
{
    int num,n,bit;

    printf("Enter the number: ");
    scanf("%d",&num);

    printf("Enter the nth bit to check: ");
    scanf("%d",&n);

    bit=(num >> n) & 1;

    printf("The %d num set to %d\n",num,bit);
}
