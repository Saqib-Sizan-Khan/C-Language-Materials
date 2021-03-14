#include<stdio.h>
int main()
{
    int i,n,even=0,odd=0;
    printf("Enter the terms:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            even++;
        }
    }
    printf("from 1 to %d\nthe even numbers are: %d\n",n,even);

    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            odd++;
        }
    }
    printf("from 1 to %d\nthe odd numbers are: %d\n",n,odd);

    return 0;
}
