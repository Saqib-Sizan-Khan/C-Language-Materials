#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Input the terms:");
    scanf("%d",&n);
    printf("the odd numbers are:");
    for(i=1;i<=n;i++)
    {
        printf("\n%d\n",2*i-1);
        sum+=2*i-1;
    }
    printf("the sum of odd numbers up to %d :%d",n,sum);
    return 0;
}
