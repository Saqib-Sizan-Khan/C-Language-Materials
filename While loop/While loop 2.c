#include<stdio.h>
int main()
{
    int n;
    printf("Enter the limit:");
    scanf("%d",&n);
    printf("The numbers from %d to 1:\n",n);

    while(n>=1)
    {
        printf("%d\n",n);
        n--;
    }
    return 0;
}

