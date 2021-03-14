#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the terms:");
    scanf("%d",&n);
    printf("\nThe even numbers are:");

    for(i=1;i<=n;i++)
    {
        printf("%d\n",2*i);
        sum+=2*i;
    }
    printf("\nSum of the even numbers:%d",sum);
    return 0;
}
