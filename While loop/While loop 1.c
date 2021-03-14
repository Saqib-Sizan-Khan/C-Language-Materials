#include<stdio.h>
int main()
{
    int n,i=1;
    printf("Enter the limit:");
    scanf("%d",&n);
    printf("The numbers from 1 to %d:\n",n);

    while(i<=n)
    {
        printf("%d\n",i);
        i++;
    }
    return 0;
}
